#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Bubble sort algorithm

int main() {
    srand(time(NULL));
    int exampleNumbersTab[7];
    // Checking the length of the array to easily change its size
    int tabSize = sizeof(exampleNumbersTab) / sizeof(exampleNumbersTab[0]);

    cout << "Before sorting: ";
    // Filling the array with random numbers
    for (int i = 0; i < tabSize; i++) {
        exampleNumbersTab[i] = rand() % 100 + 1;
        cout << exampleNumbersTab[i] << " ";
    }
    cout << endl;

    // Bubble sort
    for (int i = 0; i < tabSize; i++) {
        for (int j = 1; j < tabSize; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (exampleNumbersTab[j] < exampleNumbersTab[j-1]) {
                swap(exampleNumbersTab[j], exampleNumbersTab[j-1]);
            }
        }
    }

    cout << "After sorting: ";
    // Printing the sorted array
    for (int i = 0; i < tabSize; i++) {
        cout << exampleNumbersTab[i] << " ";
    }
    cout << endl;

    return 0;
}
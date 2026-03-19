#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Insertion sort algorithm

int main() {
    srand(time(NULL));
    int exampleNumbersTab[7];
    int tabSize = sizeof(exampleNumbersTab) / sizeof(exampleNumbersTab[0]);

    cout << "Before sorting: ";
    // Filling the array with random numbers
    for (int i = 0; i < tabSize; i++) {
        exampleNumbersTab[i] = rand() % 100 + 1;
        cout << exampleNumbersTab[i] << " ";
    }
    cout << endl;

    // Insertion sort
    for (int i = 1; i < tabSize; i++) {
        // Store the current element to be inserted
        int tmp = exampleNumbersTab[i];
        int j = i - 1;

        // Move elements that are greater than the key to one position ahead
        while (j >= 0 && exampleNumbersTab[j] > tmp) {
            exampleNumbersTab[j + 1] = exampleNumbersTab[j];
            j--;
        }
        // Place the element in its correct position
        exampleNumbersTab[j + 1] = tmp;
    }

    cout << "After sorting: ";
    // Printing the sorted array
    for (int i = 0; i < tabSize; i++) {
        cout << exampleNumbersTab[i] << " ";
    }
    cout << endl;

    return 0;
}
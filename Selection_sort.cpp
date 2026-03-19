#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Selection sort algorithm

int main() {
    srand(time(NULL));
    int randNumbArr[10];
    int arrSize = sizeof(randNumbArr) / sizeof(randNumbArr[0]);

    cout << "Before sorting: ";
    // Filling the array with random numbers
    for (int i = 0; i < arrSize; i++) {
        randNumbArr[i] = rand() % 100 + 1;
        cout << randNumbArr[i] << " ";
    }
    cout << endl;

    // Selection sort
    for (int i = 0; i < arrSize - 1; i++) {
        // Find the index of the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < arrSize; j++) {
            if (randNumbArr[minIndex] > randNumbArr[j]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        swap(randNumbArr[i], randNumbArr[minIndex]);
    }

    cout << "After sorting: ";
    // Printing the sorted array
    for (int i = 0; i < arrSize; i++) {
        cout << randNumbArr[i] << " ";
    }
    cout << endl;

    return 0;

}
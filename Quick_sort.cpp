#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Quick sort algorithm

// Partition function
int partition(int arr[], int low, int high){
    // Selecting the pivot (last element)
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot){
            i++;
            // Swap elements smaller than pivot to the left
            swap(arr[i], arr[j]);
        }
    }
    // Swap the pivot element with the element at i+1
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Recursive Quick sort function
void quickSort (int arr[], int low, int high){
    if (low < high){
        // pi is partitioning index, arr[pi] is now at right place
        int pi = partition(arr, low, high);
        
        // Separately sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    srand(time(NULL));
    int randNumbArr[10];
    int length = sizeof(randNumbArr) / sizeof(randNumbArr[0]);

    cout << "Before sorting: ";
    // Filling the array with random numbers
    for (int i = 0; i < length; i++) {
        randNumbArr[i] = rand() % 100 + 1;
        cout << randNumbArr[i] << " ";
    }
    cout << endl;

    // Quick sort execution
    quickSort(randNumbArr, 0, length - 1);

    cout << "Sorted array: ";
    // Printing the sorted array
    for (int i = 0; i < length; i++) {
        cout << randNumbArr[i] << " ";
    }
    cout << endl;

    return 0;
}
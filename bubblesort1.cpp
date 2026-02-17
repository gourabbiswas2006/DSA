#include <iostream>

using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
            {
                // Swap adjacent elements if they are in the wrong order
                swap(arr[j], arr[j + 1]);
                
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    bubbleSort(arr, n); // Perform Bubble Sort
    printArray(arr, n); // Print the sorted array
    
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int arr[], int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) { 
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        cout << "[ ";
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << " ]";
        cout << endl;

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int arr[10];
    
    cout << "masukkan 10 data: [ ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "]" << endl;
    
        
    cout << "Data yang akan di sort : [ ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl << endl;

    cout << "Quick Sort: " << endl;
    quicksort(arr, 0, 9);

    return 0;
}


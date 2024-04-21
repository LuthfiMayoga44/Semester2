#include <iostream>
using namespace std;

void swap(int& a, int& b);
void printArray(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int AR[], int low, int high);

int main() {
    int n;
    cout << "Masukkan Jumlah Elemen Dalam Array: ";
    cin >> n;
    
    int AR[n];
    
    printArray(AR, n);
    cout << endl;
    
    cout << "Array Yang Telah Di Urutkan : ";
    quickSort(AR, 0, n - 1);
    for(int i=0 ; i<5 ; i++){
    	cout<<AR[i]<<" ";
	}
    
    return 0;
}

void printArray(int AR[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke- "<< i+1 << " : ";
        cin >> AR[i];
    }
    
    cout << "Array Awal : ";
    for(int i = 0; i < n; i++){
        cout << AR[i] << " ";
    }
    cout << endl;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int AR[], int low, int high) {
    int pivot = AR[low];
    int i = low, j = high;

    while (i <= j) {
        while (AR[i] < pivot) i++;
        while (AR[j] > pivot) j--;

        if (i <= j) {
            swap(AR[i], AR[j]);
            i++;
            j--;
        }
    }

    return i;
}

void quickSort(int AR[], int low, int high) {
    if (low < high) {
        int pi = partition(AR, low, high);
        quickSort(AR, low, pi - 1);
        quickSort(AR, pi, high);
    }
}

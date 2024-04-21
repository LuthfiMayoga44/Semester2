#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 1; i <= size; i++) {
        cout << arr[i];
        if (i < size) cout << ", ";
    }
    cout << "]" << endl;
}

void merge(int ar[], int low, int mid, int high, int& comparisons, int& mov) {
    int ls = mid - low + 1;
    int rs = high - mid;

    int l[ls + 1]; // tambah 1 mulai dari 1
    int r[rs + 1]; // tambah 1 mulai dari 1

    for (int i = 1; i <= ls; i++) {
        l[i] = ar[low + i - 1]; // sesuain dimulai dari 1
        mov++;
    }
    for (int j = 1; j <= rs; j++) {
        r[j] = ar[mid + j]; // sesuain dimulai dari 1
        mov++;
    }

    int i = 1, j = 1, k = low;

    while (i <= ls && j <= rs) {
        comparisons++;
        if (l[i] >= r[j]) { 
            ar[k] = l[i];
            i++;
        } else {
            ar[k] = r[j];
            j++;
        }
        k++;
        mov++;
    }

    while (i <= ls) {
        ar[k] = l[i];
        i++;
        k++;
        mov++;
    }

    while (j <= rs) {
        ar[k] = r[j];
        j++;
        k++;
        mov++;
    }
}

void mergeSort(int arr[], int low, int high, int& comparisons, int& movements) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        cout << "Memecah List [";
        print(arr + low, mid - low + 1);

        mergeSort(arr, low, mid, comparisons, movements);

        cout << "Memecah List [";
        print(arr + mid + 1, high - mid);
        mergeSort(arr, mid + 1, high, comparisons, movements);

        cout << "Menggabungkan List [";
        print(arr + low, high - low + 1);
        merge(arr, low, mid, high, comparisons, movements);
    }
}

int main() {
    int data[100], size;
    int comparisons = 0, movements = 0;
    
    cout << "Masukkan 10 elemen : ";
    for (int i = 1; i <= 10; i++) {
       cin >> data[i];
    }
    

    cout << "Data awal: [";
    for (int i = 1; i <= 10; i++) {
        cout << data[i];
        if (i < 10) cout << ", ";
    }
    cout << "]" << endl;

    mergeSort(data, 1, 10, comparisons, movements);

    cout << "\nData terurut secara descending: [";
    for (int i = 1; i <= 10; i++) {
        cout << data[i];
        if (i < 10) cout << ", ";
    }
    cout << "]" << endl;

}


#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Jumlah elemen: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan nilai elemen: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Data sebelum sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; ++i) {
        int indeks_terkecil = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[indeks_terkecil]) {
                indeks_terkecil = j;
            }
        }

        // Tukar nilai
        int temp = arr[indeks_terkecil];
        arr[indeks_terkecil] = arr[i];
        arr[i] = temp;

        cout << "Iterasi " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    return 0;
}


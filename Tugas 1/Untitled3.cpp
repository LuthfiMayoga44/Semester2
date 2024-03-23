#include <iostream>

using namespace std;

int main() {
    int jumlah_elemen;
    cout << "Jumlah elemen: ";
    cin >> jumlah_elemen;

    int array[jumlah_elemen];

    for (int i = 0; i < jumlah_elemen; ++i) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    // Pengurutan dari besar ke kecil
    cout << "\nPengurutan:" << endl;
    for (int i = 1; i < jumlah_elemen; i++) {
        int kunci = array[i];
        int j = i - 1;
        for (; j >= 0 && array[j] < kunci; j--) {
            array[j + 1] = array[j];
        }
        array[j + 1] = kunci;
    }

    for (int k = 0; k < jumlah_elemen; ++k) 
        cout << array[k] << " ";
    cout << endl;

    cout << "\nHasil akhir:" << endl;
    for (int i = 0; i < jumlah_elemen; ++i) 
        cout << array[i] << " ";

    cout << endl;

    return 0;
}


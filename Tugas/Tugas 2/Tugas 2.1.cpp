#include <iostream>
using namespace std;

void cetak(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void gabung(int ar[], int rendah, int tengah, int tinggi, int& perbandingan, int& gerakan) {
    int ls = tengah - rendah + 1;
    int rs = tinggi - tengah;

    int l[ls];
    int r[rs];

    for (int i = 0; i < ls; i++) {
        l[i] = ar[rendah + i];
        gerakan++;
    }
    for (int j = 0; j < rs; j++) {
        r[j] = ar[tengah + 1 + j];
        gerakan++;
    }

    int i = 0, j = 0, k = rendah;

    while (i < ls && j < rs) {
        perbandingan++;
        if (l[i] >= r[j]) { 
            ar[k] = l[i];
            i++;
        } else {
            ar[k] = r[j];
            j++;
        }
        k++;
        gerakan++;
    }

    while (i < ls) {
        ar[k] = l[i];
        i++;
        k++;
        gerakan++;
    }

    while (j < rs) {
        ar[k] = r[j];
        j++;
        k++;
        gerakan++;
    }
}

void sortgabung(int arr[], int rendah, int tinggi, int& perbandingan, int& gerakan) {
    if (rendah < tinggi) {
        int tengah = rendah + (tinggi - rendah) / 2;

        cout << "Memecah Daftar [";
        cetak(arr + rendah, tengah - rendah + 1);

        sortgabung(arr, rendah, tengah, perbandingan, gerakan);

        cout << "Memecah Daftar [";
        cetak(arr + tengah + 1, tinggi - tengah);
        sortgabung(arr, tengah + 1, tinggi, perbandingan, gerakan);

        cout << "Menggabungkan Daftar [";
        cetak(arr + rendah, tinggi - rendah + 1);
        gabung(arr, rendah, tengah, tinggi, perbandingan, gerakan);
    }
}

int main() {
    int data[100], size;
    int perbandingan = 0, gerakan = 0;
    
    cout << "Masukkan 10 elemen : ";
    for (int i = 0; i < 10; i++) {
       cin >> data[i];
    }
    
    system("cls");
    
    cout << "Data awal: [";
    for (int i = 0; i < 10; i++) {
        cout << data[i];
        if (i < 10 - 1) cout << ", ";
    }
    cout << "]" << endl;

    sortgabung(data, 0, 10 - 1, perbandingan, gerakan);

    cout << "\nData terurut secara descending: [";
    for (int i = 0; i < 10; i++) {
        cout << data[i];
        if (i < 10 - 1) cout << ", ";
    }
    cout << "]" << endl;
}


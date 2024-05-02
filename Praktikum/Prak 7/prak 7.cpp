#include<iostream>
#include<string>

using namespace std;

struct Barang {
    string nama;
    int harga;
};

int main() {
    Barang daftarBarang[5] = {
        {"buku", 5000},
        {"pensil", 1000},
        {"pulpen", 2000},
        {"penghapus", 500},
        {"penggaris", 1500}
    };

    string namaBarang;
    bool ditemukan = false;

    cout << "Masukkan Nama Barang: ";
    cin >> namaBarang;

    for (int i = 0; i < 5; ++i) {
        if (daftarBarang[i].nama == namaBarang) {
            cout << "Harga " << namaBarang << " adalah " << daftarBarang[i].harga << " rupiah" << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Barang dengan nama " << namaBarang << " tidak ditemukan dalam daftar." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

string cariLokasiBuku(const string& judul) {
    if (judul == "Pemrograman C++") {
        return "Rak 1";
    } else if (judul == "Galaxy") {
        return "Rak 2";
    } else if (judul == "Teknologi") {
        return "Rak 3";
    } else if (judul == "Sikancil") {
        return "Rak 4";
    } else if (judul == "Cara Membuat Kue") {
        return "Rak 5";
    } else if (judul == "Biologi") {
        return "Rak 6";
	}  else {
        return "Buku tidak ditemukan";
    }
}

int main() {
    cout << "Selamat datang \n";

    bool inginCariLagi = true;
    while (inginCariLagi) {
        cout << "Untuk mencari lokasi buku, silakan masukkan judul buku: ";
        string judul;
        getline(cin, judul);

        string lokasi = cariLokasiBuku(judul);
        cout << "Lokasi buku dengan judul \"" << judul << "\": " << lokasi << endl;

        cout << "Mau cari buku lagi? (ya/tidak): ";
        string jawab;
        getline(cin, jawab);

        if (jawab != "ya") {
            inginCariLagi = false;
        }
    }


    return 0;
}


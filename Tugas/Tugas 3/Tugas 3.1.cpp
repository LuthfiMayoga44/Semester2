#include <iostream>
#include <string>
using namespace std;

class OrangMahasiswa {
private:
    string nama;
    int npm;

public:
    void setNama(string newNama) {
        nama = newNama;
    }

    void setNPM(int newNPM) {
        npm = newNPM;
    }

    string getNama() {
        return nama;
    }

    int getNPM() {
        return npm;
    }
};


int main() {
    int jumlahOrang;
    cout << "Masukkan jumlah orang: ";
    cin >> jumlahOrang;

    OrangMahasiswa orang[jumlahOrang];
    string nama;
    int npm;

    for (int i = 0; i < jumlahOrang; ++i) {
        cout << "Masukkan Nama orang ke-" << i + 1 << " : ";
        cin >> nama;
        orang[i].setNama(nama);
        cout << "Masukkan NPM orang ke-" << i + 1 << " : ";
        cin >> npm;
        orang[i].setNPM(npm);
    }

    for (int i = 0; i < jumlahOrang; ++i) {
        cout << "Orang ke-" << i + 1 << ":" << endl;
        cout << "Nama: " << orang[i].getNama() << endl;
        cout << "NPM: " << orang[i].getNPM() << endl;
    }

    return 0;
}


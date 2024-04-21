#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int usia;
    float ipk;
    string nama;
public:
    void setNama(string a) {
        nama = a;
    }
    void setUsia(int b) {
        usia = b;
    }
    void setIPK(float c) {
        ipk = c;
    }
    string getNama() {
        return nama;
    }
    int getUsia() {
        return usia;
    }
    float getIPK() {
        return ipk;
    }
};

int main() {
    int jumlahData;

    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> jumlahData;

    Mahasiswa *ms = new Mahasiswa[jumlahData];

    for (int i = 0; i < jumlahData; i++) {
        string nama;
        int usia;
        float ipk;

        cout << "Nama mahasiswa: ";
        cin >> nama;
        ms[i].setNama(nama);

        cout << "Usia: ";
        cin >> usia;
        ms[i].setUsia(usia);

        cout << "IPK: ";
        cin >> ipk;
        ms[i].setIPK(ipk);

        cout << endl;
    }

    cout << "Data Mahasiswa:" << endl;
    for (int i = 0; i < jumlahData; i++) {
        cout << "Nama: " << ms[i].getNama() << endl;
        cout << "Usia: " << ms[i].getUsia() << endl;
        cout << "IPK: " << ms[i].getIPK() << endl << endl;
    }

    delete[] ms;

    return 0;
}


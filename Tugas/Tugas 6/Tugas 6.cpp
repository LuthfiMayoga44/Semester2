#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
protected:
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    Mahasiswa(const string& _nama, int _umur, const string& _jurusan, const string& _fakultas)
        : nama(_nama), umur(_umur), jurusan(_jurusan), fakultas(_fakultas) {}

    virtual void displayStatus() const = 0;
};

class MahasiswaAktif : public Mahasiswa {
public:
    MahasiswaAktif(const string& _nama, int _umur, const string& _jurusan, const string& _fakultas)
        : Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}

    void displayStatus() const override {
        cout << "Status: Mahasiswa Aktif" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    }
};

class Alumni : public Mahasiswa {
private:
    int tahunLulus;

public:
    Alumni(const string& _nama, int _umur, const string& _jurusan, const string& _fakultas, int _tahunLulus)
        : Mahasiswa(_nama, _umur, _jurusan, _fakultas), tahunLulus(_tahunLulus) {}

    void displayStatus() const override {
        cout << "Status: Alumni" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
        cout << "Tahun Lulus: " << tahunLulus << endl;
    }
};

int main() {
    string nama, jurusan, fakultas;
    int umur, tahunLulus;
    char status;

    cout << "Masukkan data mahasiswa:" << endl;
    cout << "Nama: ";
    getline(cin, nama);
    cout << "Umur: ";
    cin >> umur;
    cin.ignore(); // membersihkan buffer
    cout << "Jurusan: ";
    getline(cin, jurusan);
    cout << "Fakultas: ";
    getline(cin, fakultas);

    cout << "Apakah mahasiswa aktif (A) atau alumni (L)? ";
    cin >> status;

    if (status == 'A' || status == 'a') {
        MahasiswaAktif mahasiswaAktif(nama, umur, jurusan, fakultas);
        mahasiswaAktif.displayStatus();
    } else if (status == 'L' || status == 'l') {
        cout << "Tahun Lulus: ";
        cin >> tahunLulus;
        Alumni alumni(nama, umur, jurusan, fakultas, tahunLulus);
        alumni.displayStatus();
    } else {
        cout << "Status tidak valid!" << endl;
    }

    return 0;
}


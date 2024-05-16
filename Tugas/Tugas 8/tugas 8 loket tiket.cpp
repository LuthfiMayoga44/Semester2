#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Ticket {
    string nama;
    int nomor_antrian;
};

int main() {
    queue<Ticket> antrian;

    int jumlah;
    cout << "Masukkan jumlah nama yang ingin dimasukkan ke dalam antrian: ";
    cin >> jumlah;
    cin.ignore(); 

    for (int i = 0; i < jumlah; ++i) {
        Ticket tiket;
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        getline(cin, tiket.nama);
        tiket.nomor_antrian = i + 1;
        antrian.push(tiket);
    }

    while (!antrian.empty()) {
        Ticket tiket_sekarang = antrian.front();
        cout << "Atas nama " << tiket_sekarang.nama << " mendapatkan nomor antrian " << tiket_sekarang.nomor_antrian << endl;
        antrian.pop();
    }

    return 0;
}


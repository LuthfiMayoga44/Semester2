#include <iostream>
#include <algorithm> 
#include <string>

using namespace std;

int main() {
    int jumlah_buku;

    cout << "Jumlah buku: ";
    cin >> jumlah_buku;
    cin.ignore(); 

    string judul_buku[jumlah_buku];

    for (int i = 0; i < jumlah_buku; ++i) {
        cout << "Judul " << i + 1 << ": ";
        getline(cin, judul_buku[i]);
    }

    sort(judul_buku, judul_buku + jumlah_buku);

    cout << "\nSusunan buku berdasarkan abjad (ascending):" << endl;

    for (int i = 0; i < jumlah_buku; ++i) {
        cout << i + 1 << ". " << judul_buku[i] << endl;
    }

    return 0;
}


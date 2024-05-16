#include <iostream>
#include <queue>

using namespace std;

int main() {
    int jumlah_angka;
    cout << "Masukkan jumlah angka yang ingin dimasukkan ke dalam queue: ";
    cin >> jumlah_angka;

    queue<int> q;

    cout << "Masukkan " << jumlah_angka << " angka: \n";
    for (int i = 0; i < jumlah_angka; ++i) {
        int angka;
        cin >> angka;
        q.push(angka);
    }

    cout << "\nMenampilkan angka dari queue:" << endl;
    int ukuran_queue = q.size();
    for (int i = 0; i < ukuran_queue; ++i) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}


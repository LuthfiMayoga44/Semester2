#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int jumlah_nama;
    cout << "Masukkan jumlah nama yang ingin dimasukkan ke dalam queue: ";
    cin >> jumlah_nama;

    queue<string> q;

    for (int i = 0; i < jumlah_nama; ++i) {
        string nama;
        cout << "\n";
		cout << "Nama ke-" << i + 1 << ": ";
        cin >> nama;
        q.push(nama);
    }

    cout << "\nMenampilkan nama dari queue: \n" << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}


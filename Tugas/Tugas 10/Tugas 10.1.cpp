#include <iostream>
#include <vector>

using namespace std;

void tambahSisiTidakBerarah(vector<int> *daftarKetetanggaan, int u, int v, int V) {
    daftarKetetanggaan[u].push_back(v);
    daftarKetetanggaan[v].push_back(u);
}

void cetakDaftarKetetanggaanTidakBerarah(vector<int> *daftarKetetanggaan, int V,int i=0) {
    for (int i = 0; i < V; ++i) {
        cout << "Simpul " << i << ":";
        for (int j ; daftarKetetanggaan[i] ) {
            cout << " -> " << j;
        }
        cout << endl;
    }
}

void tambahSisiBerarah(vector<int> *daftarKetetanggaan, int u, int v) {
    daftarKetetanggaan[u].push_back(v);
}

void cetakDaftarKetetanggaanBerarah(vector<int> *daftarKetetanggaan, int V) {
    for (int i = 0; i < V; ++i) {
        cout << "Simpul " << i << ":";
        for (int j : daftarKetetanggaan[i]) {
            cout << " -> " << j;
        }
        cout << endl;
    }
}

void tambahSisiBerbobot(vector<pair<int, int>> *daftarKetetanggaan, int u, int v, int bobot) {
    daftarKetetanggaan[u].push_back(make_pair(v, bobot));
}

void cetakDaftarKetetanggaanBerbobot(vector<pair<int, int>> *daftarKetetanggaan, int V) {
    for (int i = 0; i < V; ++i) {
        cout << "Simpul " << i << ":";
        for (auto j : daftarKetetanggaan[i]) {
            cout << " -> (" << j.first << ", " << j.second << ")";
        }
        cout << endl;
    }
}

int main() {
    int V = 5;
    vector<int> *daftarKetetanggaanTidakBerarah = new vector<int>[V];
    vector<int> *daftarKetetanggaanBerarah = new vector<int>[V];
    vector<pair<int, int>> *daftarKetetanggaanBerbobot = new vector<pair<int, int>>[V];

    tambahSisiTidakBerarah(daftarKetetanggaanTidakBerarah, 0, 1, V);
    tambahSisiTidakBerarah(daftarKetetanggaanTidakBerarah, 0, 4, V);
    tambahSisiTidakBerarah(daftarKetetanggaanTidakBerarah, 1, 2, V);
    tambahSisiTidakBerarah(daftarKetetanggaanTidakBerarah, 1, 3, V);
    tambahSisiTidakBerarah(daftarKetetanggaanTidakBerarah, 1, 4, V);
    tambahSisiTidakBerarah(daftarKetetanggaanTidakBerarah, 2, 3, V);
    tambahSisiTidakBerarah(daftarKetetanggaanTidakBerarah, 3, 4, V);

    cout << "Daftar ketetanggaan (graf tidak berarah):" << endl;
    cetakDaftarKetetanggaanTidakBerarah(daftarKetetanggaanTidakBerarah, V);

    tambahSisiBerarah(daftarKetetanggaanBerarah, 0, 1);
    tambahSisiBerarah(daftarKetetanggaanBerarah, 0, 4);
    tambahSisiBerarah(daftarKetetanggaanBerarah, 1, 2);
    tambahSisiBerarah(daftarKetetanggaanBerarah, 1, 3);
    tambahSisiBerarah(daftarKetetanggaanBerarah, 1, 4);
    tambahSisiBerarah(daftarKetetanggaanBerarah, 3, 4);

    cout << "\nDaftar ketetanggaan (graf berarah):" << endl;
    cetakDaftarKetetanggaanBerarah(daftarKetetanggaanBerarah, V);

    tambahSisiBerbobot(daftarKetetanggaanBerbobot, 0, 1, 10);
    tambahSisiBerbobot(daftarKetetanggaanBerbobot, 0, 4, 20);
    tambahSisiBerbobot(daftarKetetanggaanBerbobot, 1, 2, 30);
    tambahSisiBerbobot(daftarKetetanggaanBerbobot, 1, 3, 40);
    tambahSisiBerbobot(daftarKetetanggaanBerbobot, 1, 4, 50);
    tambahSisiBerbobot(daftarKetetanggaanBerbobot, 2, 3, 60);
    tambahSisiBerbobot(daftarKetetanggaanBerbobot, 3, 4, 70);

    cout << "\nDaftar ketetanggaan (graf berbobot):" << endl;
    cetakDaftarKetetanggaanBerbobot(daftarKetetanggaanBerbobot, V);

    // Dealokasi memori
    delete[] daftarKetetanggaanTidakBerarah;
    delete[] daftarKetetanggaanBerarah;
    delete[] daftarKetetanggaanBerbobot;

    return 0;
}


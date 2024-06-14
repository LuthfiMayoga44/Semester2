#include <iostream>
#include <cstring> // Untuk memset
using namespace std;

const int MAX = 100;
int dist[MAX][MAX]; // Deklarasi array dist

void floydWarshall(int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah node pada graph: ";
    cin >> n;

    memset(dist, 0x3f, sizeof dist); // Inisialisasi array dist
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }

    int w;
    cout << "Masukkan jarak antar node: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> w;
            dist[i][j] = w;
        }
    }

    floydWarshall(n);

    cout << "Hasil jalur terpendek antar node: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



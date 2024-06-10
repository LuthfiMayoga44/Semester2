#include <iostream>
#include <cstring>

using namespace std;

const int N = 100;

int arr[N][N];

void Jumlahkota(int n, int result[N][N]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = arr[i][j];
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (result[i][k] + result[k][j] < result[i][j]) {
                    result[i][j] = result[i][k] + result[k][j];
                }
            }
        }
    }
}

int main() {
    using namespace std;

    int n;
    cout << "Masukkan jumlah Kota: ";
    cin >> n;

    cout << "Nilai cost matrix\n";
    for (int i = 0; i < n; i++) {
        cout << "Cost element baris ke " << (i + 1) << ":\n";
        for (int j = 0; j < n; j++) {
            int w;
            cin >> w;
            arr[i][j] = w;
        }
    }

    int result[N][N];
    Jumlahkota(n, result);

    cout << "Cost list: \n";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
    }
    cout << "\n";

    return 0;
}


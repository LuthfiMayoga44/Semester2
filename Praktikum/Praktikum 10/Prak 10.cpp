#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

const int N = 5; // Ukuran graf
const int M = numeric_limits<int>::max(); // Nilai tak hingga

void dijkstra(int graph[N][N], int source, int destination) {
    vector<pair<int, int> >adj[N];
    int Q[N], R[N];

    for (int i = 0; i < N; i++) {
        Q[i] = M;
        R[i] = -1;
        for (int j = 0; j < N; j++) {
            if (graph[i][j] != M) {
                adj[i].push_back(make_pair(j, graph[i][j]));
            }
        }
    }

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>  > > pq;
    pq.push(make_pair(0, source));
    Q[source] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            int w = adj[u][i].second;

            if (Q[v] > Q[u] + w) {
                Q[v] = Q[u] + w;
                R[v] = u;
                pq.push(make_pair(Q[v], v));
            }
        }
    }

    cout << "Beban: ";
    for (int i = 0; i < N; i++) {
        cout << Q[i] << " ";
    }
    cout << endl;

    cout << "Rute: ";
    for (int i = 0; i < N; i++) {
        cout << R[i] << " ";
    }
    cout << endl;
}

int main() {
    int graph[N][N] = {
        {M, 0, 1, M, 5},
        {10, M, 3, M, M},
        {13, M, 0, 2, M},
        {M, M, M, 0, 1},
        {M, M, N, M, 0}
    };

    int source, destination;
    cout << "Masukkan node asal: ";
    cin >> source;
    cout << "Masukkan node tujuan: ";
    cin >> destination;

    dijkstra(graph, source, destination);

    return 0;
}


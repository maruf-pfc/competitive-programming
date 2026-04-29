// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2214/problem/E
// Date: 2026-04-06

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define INF 1e9
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    
};

void maruf(int t){
    int n, m;
    cin >> n >> m;

    // vector<vector<pii>> adj(n + 1);

    // for (int i = 0; i < m; i++) {
    //     int u, v, w;
    //     cin >> u >> v >> w;

    //     adj[u].push_back({v, w});
    //     adj[v].push_back({u, w});
    // }

    // int src = 1;
    // vector<int> dist(n + 1, INF);
    // priority_queue<pii, vector<pii>, greater<pii>> pq;

    // dist[src] = 0;
    // pq.push({0, src});

    // while (!pq.empty()) {
    //     auto [d, u] = pq.top();
    //     pq.pop();

    //     if (d > dist[u]) continue;

    //     for (auto [v, w] : adj[u]) {
    //         if (dist[u] + w < dist[v]) {
    //             dist[v] = dist[u] + w;
    //             pq.push({dist[v], v});
    //         }
    //     }
    // }

    vector<vector<int>> dist(n, vector<int>(n, INF));

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;

        dist[u][v] = w;
        dist[v][u] = w;
    }

    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            for(int j = 0; j < n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 1; i < n; i++) {
        if (dist[0][i] >= INF) cout << -1 << "\n";
        else cout << dist[0][i] << "\n";
    }
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
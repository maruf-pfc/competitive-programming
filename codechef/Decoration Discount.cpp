// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.codechef.com/START198C/problems/DECDISC
// Date: 2025-08-06

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    
};

void maruf(int t) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v) cin >> i;

        int minCost = INT_MAX;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;

                vector<int> cost;

                cost.push_back(v[i]);
                if (i + 1 == j) cost.push_back(v[j] / 2);
                else cost.push_back(v[j]);

                // for(auto i : cost){
                //     cout << i << " ";
                // }
                // cout << endl;

                int totalCost = cost[0] + cost[1];
                // cout << "Total Cost " << totalCost << endl;

                minCost = min(minCost, totalCost);
                // cout << "Min Cost " << minCost << endl;
            }
        }

        cout << minCost << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
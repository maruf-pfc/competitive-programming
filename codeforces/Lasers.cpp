// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2148/problem/B
// Date: 2025-09-13

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

void maruf(int t){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n);
    vector<int> b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    int res = n + m;
    cout << res << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
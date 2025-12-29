// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2182/problem/C
// Date: 2025-12-30

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
    ll n;
    cin >> n;

    vector<ll> a(n), b(n), c(n);
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;
    for(ll &x : c) cin >> x;

    ll ab = 0, bc = 0;

    for (int i = 0; i < n; i++) {
        bool isOk = true;
        for (int j = 0; j < n; j++) {
            if (a[j] >= b[(i + j) % n]) {
                isOk = false;
                break;
            }
        }
        if (isOk) ab++;
    }

    for (int i = 0; i < n; i++) {
        bool isOk = true;
        for (int j = 0; j < n; j++) {
            if (b[j] >= c[(i + j) % n]) {
                isOk = false;
                break;
            }
        }
        if (isOk) bc++;
    }

    cout << n * ab * bc << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
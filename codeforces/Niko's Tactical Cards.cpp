// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2173/problem/B
// Date: 2025-12-05

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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    int k, mx, mn;
    k = mx = mn = 0;

    /*
    3 -> 2 -> 2 -> 2 -> 1 != 12
    tst 2 !ok
    all blue = -9 -> 6 -> -3 -> 5 -> -3
    tst 2 !ok
    */

    for(int i = 0; i < n; i++){
        ll redP = mx - a[i];
        ll redN = mn - a[i];

        ll blueP = b[i] - mx;
        ll blueN = b[i] - mn;

        mx = max({redP, redN, blueP, blueN});
        mn = min({redP, redN, blueP, blueN});
    }

    cout << mx << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
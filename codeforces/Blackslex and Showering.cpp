// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2179/problem/B
// Date: 2025-12-23

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

    vector<ll> arr(n);
    for(auto &i : arr) cin >> i;

    ll tt = 0;
    for(ll i = 1; i < n; i++){
        tt += abs(arr[i] - arr[i - 1]);
    }

    ll res = 0;

    // risky floors 1, n
    res = abs(arr[1] - arr[0]);
    res = max(res, abs(arr[n - 1] - arr[n - 2]));

    // max(11, 2) => 11

    // baki floors
    for(ll i = 1; i < n - 1; i++){
        ll prev = (abs(arr[i - 1] - arr[i]) + abs(arr[i] - arr[i + 1]));
        ll curr = abs(arr[i - 1] - arr[i + 1]);
        res = max(res, prev - curr);
    }

    cout << tt - res << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
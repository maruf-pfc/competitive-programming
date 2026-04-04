// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2218/problem/D
// Date: 2026-04-04

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

class Solution {
public:
    
};

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void maruf(int t){
    int n; cin >> n;
    
    vector<ll> v(n);
    v[0] = 1;
    for(int i = 1; i < n; i++){
        v[i] = v[i - 1] * (i + 1);
    }

    // for(int i = 0; i < n - 1; i++){
    //     cout << gcd(v[i], v[i + 1]) << sp;
    // }

    // cout << endl;

    for(auto i : v){
        cout << i << sp;
    }

    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
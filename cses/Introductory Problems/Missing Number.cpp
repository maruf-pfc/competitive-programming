// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://cses.fi/problemset/task/1083
// Date: 2026-05-21

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
    ll n; cin >> n;
    vector<ll> v(n - 1);
    ll sum = 0;
    for(auto &i : v) {
        cin >> i;
        sum += i;
    }

    cout << (n * (n + 1) / 2) - sum << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
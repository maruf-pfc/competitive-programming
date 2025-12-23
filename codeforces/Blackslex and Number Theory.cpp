// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2179/problem/C
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
    
    vector<ll> v(n);
    for(auto &i : v) cin >> i;

    ll mn = *min_element(v.begin(), v.end());

    ll g = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != mn) {
            g = gcd(g, v[i] - mn);
        }
    }

    cout << max(mn, g) << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
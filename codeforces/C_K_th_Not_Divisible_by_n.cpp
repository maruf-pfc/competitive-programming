// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/1352/problem/C
// Date: 2026-04-28

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

vector<ll> notDivisibleByN(ll n){
    vector<ll> ans;
    for(ll i = 1; i <= n * 2; i++){
        if(i % n != 0) ans.push_back(i);
    }
    return ans;
}

void maruf(int t){
    ll n, k;
    cin >> n >> k;

    // vector<ll> ans = notDivisibleByN(n);
    // cout << ans[k - 1] << endl;

    cout << k + (k - 1) / (n - 1) << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
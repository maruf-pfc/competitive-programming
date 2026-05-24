// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://cses.fi/problemset/task/1068
// Date: 2026-05-22

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

    vector<ll> v;
    v.push_back(n);

    while(n != 1){
        if(n & 1) {
            n = (n * 3) + 1;
            v.push_back(n);
        }
        else {
            n = n / 2;
            v.push_back(n);
        }
    }

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
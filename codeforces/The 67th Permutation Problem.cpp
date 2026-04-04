// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2218/problem/C
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

void maruf(int t){
    int n;
    cin >> n;

    vector<int> v(n * 3, 0);
    
    int l = 1, r = n * 3;
    while(l < r){
        v.pb(l);
        v.pb(r - 1);
        v.pb(r);

        l++; r -= 2;
    }

    for(auto i : v){
        if(i){
            cout << i << sp;
        }
    }

    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
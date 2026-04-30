// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2227/problem/C
// Date: 2026-04-30

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

vector<int> fact(int n){
    vector<int> v;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            v.emplace_back(i);
            if(i * i != n){
                v.emplace_back(n / i);
            }
        }
    }
    return v;
}

void maruf(int t){
    int n;
    cin >> n;

    vector<int> v, ans;
    v.resize(n);
    for(auto &i : v) cin >> i;

    vector<int> si, tw, th, ot;
    for(auto i : v){
        if(i % 6 == 0) si.emplace_back(i);
        else if(i % 2 == 0) tw.emplace_back(i);
        else if(i % 3 == 0) th.emplace_back(i);
        else ot.emplace_back(i);
    }

    for(auto i : si) ans.emplace_back(i);
    for(auto i : tw) ans.emplace_back(i);
    for(auto i : ot) ans.emplace_back(i);
    for(auto i : th) ans.emplace_back(i);

    for(auto i : ans) cout << i << sp;
    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
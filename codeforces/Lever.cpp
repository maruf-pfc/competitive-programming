// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2131/problem/A
// Date: 2025-08-10

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
    vector<int> a(n), b(n);
    for(auto &i: a) cin >> i;
    for(auto &i: b) cin >> i;

    int res = 1;
    bool ok = false;
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            res += a[i] - b[i];
        }
    }
    cout << res << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
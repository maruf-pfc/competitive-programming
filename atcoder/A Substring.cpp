// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://atcoder.jp/contests/abc417/tasks/abc417_a
// Date: 2025-08-06

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
    int n, a, b;
    cin >> n >> a >> b;
    string s; cin >> s;

    vector<bool> deleted(n, 0);
    for(int i = 0; i < a; i++) deleted[i] = 1;
    for(int i = n - 1; i >= n - b; i--) deleted[i] = 1;

    for(int i = 0; i < n; i++){
        if(!deleted[i]){
            cout << s[i];
        }
    }

    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
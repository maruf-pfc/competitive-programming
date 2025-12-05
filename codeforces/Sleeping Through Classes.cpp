// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2173/problem/A
// Date: 2025-12-05

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
    int n, k;
    cin >> n >> k;

    string s; cin >> s;

    int res = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if (s[i] == '1') cnt = k;
        else {
            if (cnt) cnt--;
            else res++;
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
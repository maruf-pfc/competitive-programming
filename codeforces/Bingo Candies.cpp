// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2208/problem/A
// Date: 2026-03-14

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

    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            mp[x]++;
        }
    }

    bool exits = false;
    
    for(auto x : mp){
        if(x.second > n * (n - 1)){
            exits = true;
        }
    }

    cout << (exits ? "NO" : "YES") << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
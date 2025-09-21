// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2148/problem/A
// Date: 2025-09-13

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
    int x, n;
    cin >> x >> n;
    int sum = 0;
    vector<int> v(n);
    for(int i = 1; i <= n; i++){
        if(i & 1) v.push_back(x);
        else v.push_back(-x);
    }

    for(auto i : v){
        sum += i;
    }

    cout << sum << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
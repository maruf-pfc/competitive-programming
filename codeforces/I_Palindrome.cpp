// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
// Date: 2026-05-03

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
    string s;
    cin >> s;

    string r = s;
    reverse(r.begin(), r.end());

    // remove all starting zeros or r
    while (r.size() > 1 && r[0] == '0') r.erase(r.begin());
    
    if (s.size() != r.size()) {
        cout << r << endl;
        cout << "NO" << endl;
        return;
    }

    cout << r << endl;
    cout << (s == r ? "YES" : "NO") << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2225/problem/B
// Date: 2026-04-21

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

bool alt(vector<int>& str){
    int n = str.size();

    if(n == 0) return true;

    return str.back() - str.front() + 1 == n;
}

void maruf(int t){
    string s;
    cin >> s;

    vector<int> av, bv;

    for (int i = 0; i < s.size(); i++) {
        char a = (i % 2 == 0) ? 'a' : 'b';
        char b = (i % 2 == 0) ? 'b' : 'a';

        if (s[i] != a) av.push_back(i);
        if (s[i] != b) bv.push_back(i);
    }

    cout << (alt(av) or alt(bv) ? "YES" : "NO") << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
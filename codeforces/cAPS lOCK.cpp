// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/131/problem/A
// Date: 2025-12-23

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

    bool ok = true;

    for (int i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            ok = false;
            break;
        }
    }

    if (ok) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    cout << s << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
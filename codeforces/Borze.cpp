// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/problemset/problem/32/B
// Date: 2025-12-13

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
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.') cout << 0;
        else if(s[i] == '-' and s[i + 1] == '.') cout << 1, i++;
        else if(s[i] == '-' and s[i + 1] == '-') cout << 2, ++i;
    }
    
    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
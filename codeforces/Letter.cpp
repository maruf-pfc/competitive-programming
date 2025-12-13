// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/problemset/problem/14/A
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
    int n, m;
    cin >> n >> m;
    
    vector<string> str(n);
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }

    int top = n, bottom = -1, left = m, right = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (str[i][j] == '*') {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }

    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            cout << str[i][j];
        }
        cout << "\n";
    }
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
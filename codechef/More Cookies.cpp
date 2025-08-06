// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.codechef.com/problems/MORECOOK
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
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int extra = 0;
    while (true) {
        bool hasEqual = false;
        bool hasLess = false;

        for (int x : a) {
            if (x == c) hasEqual = true;
            if (x < c) hasLess = true;
        }

        if (hasLess && !hasEqual) {
            cout << extra << endl;
            return;
        }

        c++;
        extra++;
    }
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
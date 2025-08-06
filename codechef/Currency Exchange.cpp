// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.codechef.com/START198C/problems/CUREX
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
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if(a1 == a2 and b1 == b2) {
        cout << "Yes" << endl;
        return;
    }
    
    int totalCoinsLeftSide = 5 * a1 + b1;
    int totalCoinsRightSide = 5 * a2 + b2;

    if(totalCoinsLeftSide < totalCoinsRightSide) {
        cout << "No" << endl;
        return;
    }

    int diff = totalCoinsLeftSide - totalCoinsRightSide;

    if(diff % 6 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
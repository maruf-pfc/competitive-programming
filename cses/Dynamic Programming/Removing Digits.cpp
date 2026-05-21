// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://cses.fi/problemset/task/1637
// Date: 2026-05-21

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

int dp[1000005];

int removingDigits(int n){
    if(n == 0) return 0;

    if(dp[n] != -1) return dp[n];

    int res = INT_MAX;
    int m = n;
    while(m){
        int x = m % 10;
        if(x) res = min(res, 1 + removingDigits(n - x));
        m /= 10;
    }

    return dp[n] = res;
}

void maruf(int t){
    int n; cin >> n;

    memset(dp, -1, sizeof(dp));

    cout << removingDigits(n) << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
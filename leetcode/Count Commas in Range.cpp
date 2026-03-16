// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/weekly-contest-493/problems/count-commas-in-range/description/
// Date: 2026-03-16

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
    int countCommas(int n) {
        long long ans = 0;

        if(n >= 1000) ans += n - 999;
        if(n >= 1000000) ans += n - 999999;
        if(n >= 1000000000) ans += n - 999999999;

        return ans;
    }
};

void maruf(int t){
    
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
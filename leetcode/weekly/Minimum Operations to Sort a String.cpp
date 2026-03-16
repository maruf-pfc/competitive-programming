// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/minimum-operations-to-sort-a-string/description/
// Date: 2026-03-17

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
    int minOperations(string s) {
        bool isSorted = false;

        string str = s;
        sort(str.begin(), str.end());
        if(s == str) return 0;

        if (s.size() == 2) return -1;

        int n = s.size();
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) ans++;
        }

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
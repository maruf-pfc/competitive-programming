// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2227/problem/D
// Date: 2026-04-30

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

// Upsolve
// Any palindrome containing 0 must be one of three types:
// Odd-length with first 0 at center
// Odd-length with second 0 at center
// Even-length with both 0s symmetric (only if the middle part is already a palindrome)

const int MX = 100005;
int vis[MX], clk = 0;

int getMex(vector<int>& v, int l, int r) {
    clk++;
    for (int i = l; i <= r; i++) vis[v[i]] = clk;
    int m = 0;
    while (vis[m] == clk) m++;
    return m;
}

void expand(vector<int>& v, int l, int r, int& ans) {
    int n = v.size();
    while (l >= 0 && r < n && v[l] == v[r]) {
        l--; r++;
    }
    ans = max(ans, getMex(v, l+1, r-1));
}

void maruf(int t) {
    int n; cin >> n;
    n *= 2;
    vector<int> v(n);
    for (int& x : v) cin >> x;
    
    // find positions of 0
    vector<int> z;
    for (int i = 0; i < n; i++) if (v[i] == 0) z.emplace_back(i);
    
    int ans = 0;
    
    // case 1 & 2: odd palindrome with one 0 at center
    for (int p : z) expand(v, p, p, ans);
    
    // case 3: even palindrome with both 0s as symmetric boundary
    if (z.size() == 2) {
        int l = z[0], r = z[1];
        // check if middle part [l+1, r-1] is palindrome
        bool ok = true;
        for (int i = l+1, j = r-1; i < j; i++, j--) {
            if (v[i] != v[j]) { 
                ok = false; break; 
            }
        }

        if (ok) expand(v, l, r, ans);
    }
    
    cout << ans << '\n';
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
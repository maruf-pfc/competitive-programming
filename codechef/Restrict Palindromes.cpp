// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.codechef.com/START200D/problems/RESPAL
// Date: 2025-08-20

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
    int n;
    cin >> n;

    string pattern = "abcde";
    string res = "";

    for (int i = 0; i < n; i++) {
        res += pattern[i % 5];
    }

    cout << res << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
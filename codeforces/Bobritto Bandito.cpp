// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2094/problem/B
// Date: 2025-08-03

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
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int l_prime, r_prime;
    l_prime = r_prime = 0;

    for(int i = 0; i <= r; i++){
        if(m and r_prime + 1 <= r){
            r_prime++;
            m--;
        }
    }
    for(int i = l; i <= 0; i++){
        if(m){
            l_prime--;
            m--;
        }
    }

    cout << l_prime << " " << r_prime << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
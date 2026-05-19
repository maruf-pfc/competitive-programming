// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/problemset/problem/2205/B
// Date: 2026-05-19

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
    ll n; cin >> n;

    ll ans = 1;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            ans *= i;

            while(n % i == 0) n /= i;
        }
    }

    if(n > 1) ans *= n;

    cout << ans << endl;

}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
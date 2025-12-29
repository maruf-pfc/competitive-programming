// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2182/problem/B
// Date: 2025-12-30

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
    ll a, b;
    cin >> a >> b;

    ll res = 0;
    { // ababab
        ll x = a, y = b;
        for(ll i = 0; i < 25;i++){
            ll layer = 1ll << i;

            if(i & 1){
                if(y >= layer) y -= layer;
                else {
                    res = max(res, i);
                    break;
                }
            }else{
                if(x >= layer) x -= layer;
                else {
                    res = max(res, i);
                    break;
                }
            }
        }
    }

    { // bababa
        ll x = a, y = b;
        for(ll i = 0; i < 25;i++){
            ll layer = 1ll << i;

            if(!(i & 1)){
                if(y >= layer) y -= layer;
                else {
                    res = max(res, i);
                    break;
                }
            }else{
                if(x >= layer) x -= layer;
                else {
                    res = max(res, i);
                    break;
                }
            }
        }
    }

    cout << res << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
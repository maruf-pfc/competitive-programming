// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2231/problem/B
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

/*
6
5 3 10 5 9 7 -> NO

5
2 1 1 2 1
1,4 -> 1 
1 1 1 1 1

3
3 1 2
1 -> 1
1 1 2

7
8 3 9 4 10 5 11
-> pos of invalid idx are 2 3 6
8,9,9,10,10,11,11 


*/

void maruf(int t){
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &i : v) cin >> i;

    // vector<int> invalid;
    // bool ok = true;
    
    // for(int i = 0; i < n - 1; i++){
    //     if (v[i] > v[i + 1]) {
    //         invalid.push_back(i + 1);
    //     }
    // }

    // for (auto idx : invalid) {
    //     v[idx] = v[idx - 1];
    // }

    // for (int i = 0; i < n - 1; i++) {
    //     if (v[i] > v[i + 1]) {
    //         ok = false;
    //     }
    // }

    // cout << (ok ? "YES" : "NO") << endl;

    // int mx = v[0];
    // int idx = 0;

    // for (int i = 1; i < n; i++) {
    //     if (v[i] > mx) {
    //         mx = v[i];
    //         idx = i;
    //     }
    // }

    // cout << (idx < n - 1 ? "NO" : "YES") << endl;

}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
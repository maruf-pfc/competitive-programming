// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.codechef.com/START200D/problems/RNIM
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
    int n; cin >> n;

    vector<int> piles(n);
    for(auto &i : piles) cin >> i;

    bool largePile = any_of(piles.begin(), piles.end(), [](int size){
        return size >= 2;
    });

    if(largePile) cout << 499122177 << endl;
    else cout << (piles.size() & 1 ? 1 : 0) << endl; 
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
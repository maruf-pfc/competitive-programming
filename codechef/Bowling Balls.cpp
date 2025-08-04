// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.codechef.com/problems/BOWLBALL
// Date: 2025-08-05

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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int b; cin >> b;
        if(b >= x and b <= y) cnt++;
    }

    cout << cnt << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
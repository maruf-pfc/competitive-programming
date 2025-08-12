// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2131/problem/B
// Date: 2025-08-10

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
    vector<int> v;

    if(n == 2){
        cout << "-1 2" << endl;
        return;
    } else {
        for(int i = 0; i < n; i++){
            if (i % 2 == 0) {
                cout << -1 << " ";
            } else if (i == n -1 && n % 2 == 0) {
                cout << 2 << " ";
            } else {
                cout << 3 << " ";
            }
        }
        cout << endl;
        return;
    }
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
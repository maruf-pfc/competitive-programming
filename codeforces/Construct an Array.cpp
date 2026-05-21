// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2231/problem/A
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
n = 3
6, 2, 3, 8, 5
2i
12 * 1 = 12

even nums 
2 4 6 8
6 failed
1 3 5 7
4 8 12 works -> 1 3 4 5 7 8 12

2i - 1
2 - 1 = 1
4 - 1 = 3
6 - 1 = 5

1 <= i <= 2n
*/

void maruf(int t){
    int n; cin >> n;

    vector<int> res(n);
    for(int i = 1; i <= n; i++) {
        cout << (2 * i) - 1 << " ";
    }

    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
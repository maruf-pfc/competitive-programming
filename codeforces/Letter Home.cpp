// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/problemset/problem/2121/A
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

/*
n = 1, s = 1
v = 1
=> 1 to 1
1 2
1
=> 2 to 1
1 1
2
=> 1 to 2
6 6
1 2 3 9 10 11
=> 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
// => 1 1 1 1 
// => 1 1 1 
// => 1 1 
// => 1 1 
// => 1 1 1 
// => 1 1 1 1 

2 2
1 3
=> 1 1 1

s - v[0]
6 - 1 = 5
v[n - 1] = 11 - v[0] = 11 - 2 = 10
10 + 5 = 15

2 3
1 2

*/

class Solution {
public:
    
};

void maruf(int t){
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    for(auto &i : v) cin >> i;

    // int res = 0;
    // res = abs(s - v[0]);

    // int skip = 0;
    // if(res > 1){
    //     for(auto i : v){
    //         if(i <= res) skip++;
    //     }
    // }
    // res += v[n - 1] - v[skip];
    // cout << res << endl;

    int ans = min(abs(s - v[0]), abs(s - v.back())) + v.back() - v[0];
        
    cout << ans << '\n';
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
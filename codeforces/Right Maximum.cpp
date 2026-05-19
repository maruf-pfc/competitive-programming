// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/problemset/problem/2204/B
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

/*
5
2 1 2 3 1
=>
choose max = 3, remove 3 and right values of it
Array Becomes = 2 1 2
choose max 2, remove it and the right values
Array Becomes =  2 1
choose max 2. remove it and the right values
Array becomes empty
Total Steps = 3

4
1 3 3 1
=>
choose max 3, remove it and right values
Array Becomes = 1 3
choose max 3, remove it and the right values
Array Becomes = 1
choose max 1, remove it and the right values
Array Becomes empty

6
1 2 3 4 5 6
=> 6
*/

void maruf(int t){
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &i : v) cin >> i;

    int ans = 0;

    // while (!v.empty()){
    //     int mx = *max_element(v.begin(), v.end());

    //     // Find rightmost occurrence of maximum
    //     int pos = -1;

    //     for (int i = 0; i < v.size(); i++)
    //         if (v[i] == mx) 
    //             pos = i;

    //     ans++;

    //     // Remove max and everything to the right
    //     v.erase(v.begin() + pos, v.end());
    // }

    int mx = 0;

    for(int i = 0; i < n; i++){
        if(v[i] >= mx){
            ans++;
            mx = v[i];
        }
    }

    cout << ans << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
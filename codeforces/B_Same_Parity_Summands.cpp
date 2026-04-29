// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/1352/problem/B
// Date: 2026-04-28

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    
};

void maruf(int t){
    int n, k;
    cin >> n >> k;

    // bool ok = false;
    // vector<int> ans;

    // for(int i = 1; i <= n; i++){
    //     if(i % 2 == k % 2){
    //         ans.push_back(i);
    //         if(ans.size() == k - 1) break;
    //     }
    // }

    // for(auto i : ans) cout << i << sp;
    // cout << endl;

    // if(ans.size() == k - 1){
    //     int sum = 0;
    //     for(auto i : ans) sum += i;
    //     if(sum < n){
    //         ok = true;
    //         ans.push_back(n - sum);
    //     }
    // }

    // for(auto i : ans) cout << i << sp;
    // cout << endl;

    // if(ans.back() & 1) ok = false;

    // if(ok){
    //     YES;
    //     for(auto i : ans) cout << i << sp;
    //     cout << endl;
    // }else NO;


    if(n >= k && (n % 2 == k % 2)){
        YES;
        for(int i = 0; i < k - 1; i++) cout << 1 << " ";
        cout << n - (k - 1) << "\n";
    }
    else if(n >= 2 * k && n % 2 == 0){
        YES;
        for(int i = 0; i < k - 1; i++) cout << 2 << " ";
        cout << n - 2 * (k - 1) << "\n";
    }
    else NO;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
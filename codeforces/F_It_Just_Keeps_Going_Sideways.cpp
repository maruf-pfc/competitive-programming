// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2227/problem/F
// Date: 2026-05-02

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
    ll n;
    cin>>n;
    
    vector<ll> v(n);
    for(auto &x:v) cin>>x;
    
    vector<ll> arr(v.begin(),v.end());
    sort(arr.begin(), arr.end());
    
    ll ans = 0;
    ll carry = 0;
    for(int i=0;i<n;i++) {
        ll diff=(carry+v[i]-arr[i]);
        ans+=diff;
        carry=diff;
    }
    
    ll mx = 0;
    for(int i=1;i<n;i++) {
        if(v[i]<=arr[i]) {
            ll lb = lower_bound(arr.begin(), arr.begin()+i, v[i]) - arr.begin();
            ll cnt = i - lb;
            mx = max(mx,cnt);
            // cout<<i<<"i "<<cnt<<"cnt "<<lb<<"\n";
        }
    }
    
    ans+=mx;
    cout<<ans<<"\n";
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
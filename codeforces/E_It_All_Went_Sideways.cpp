// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2227/problem/E
// Date: 2026-05-01

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
    
    vector<ll> suffmin(v);
    suffmin[n-1]=v[n-1];
    
    for(int i=n-2;i>=0;i--) {
        suffmin[i]=min(v[i],suffmin[i+1]);
    }
    
    ll ans = 0;
    for(int i=0;i<n;i++) {
        ans+=v[i]-suffmin[i];
    }
    
    ll maxSameElement = 1;
    ll currSameElement = 1;
    for(int i=1;i<n;i++) {
        if(suffmin[i]==suffmin[i-1]) {
            currSameElement++;
            maxSameElement=max(maxSameElement,currSameElement);
        }
        else {
            currSameElement=1;
        }
    }
    
    ans+=(maxSameElement-1);
    
    cout<<ans<<"\n";
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
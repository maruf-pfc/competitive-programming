// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/1669/problem/A
// Date: 2025-08-08

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
    int rating;
    cin >> rating;

    if(rating <= 1399) cout << "Division 4" << endl;
    else if(rating >= 1400 and rating <= 1599) cout << "Division 3" << endl;
    else if(rating >= 1600 and rating <= 1899) cout << "Division 2" << endl;
    else cout << "Division 1" << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
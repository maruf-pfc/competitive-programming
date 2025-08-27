// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2120/problem/A
// Date: 2025-08-15

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

class Solution{
public:

};

void maruf(int t){
    ll l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if (l1 + l2 + l3 == b1 && b1 == b2 && b2 == b3)
        cout << "YES\n";
    else if (l2 + l3 == l1 && b2 == b3 && b1 + b2 == l1)
        cout << "YES\n";
    else if (b1 + b2 + b3 == l1 && l1 == l2 && l2 == l3)
        cout << "YES\n";
    else if (b2 + b3 == b1 && l2 == l3 && l1 + l2 == b1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        maruf(i);
}
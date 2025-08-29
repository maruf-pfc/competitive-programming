// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2136/problem/0
// Date: 2025-08-28

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

bool ok(int fhalf, int shalf) {
  return max(fhalf, shalf) <= 2 * min(fhalf, shalf) + 2;
}

void maruf(int t){
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if(a < 0 or b < 0 or c < 0 or d < 0){
    cout << "NO" << endl;
    return;
  }

  bool fhalf = ok(a, b);
  bool shalf = ok(c - a, d - b);
  cout << (fhalf and shalf ? "YES" : "NO") << endl;
}

int main() {
  Maruf
  int t = 1;
  cin >> t;
  for(int i = 1; i <= t; i++) maruf(i);
}
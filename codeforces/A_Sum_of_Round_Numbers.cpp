// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/1352/problem/A
// Date: 2026-04-28

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
    string s;
    cin >> s;
    
    vector<string> ans;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '0'){
            string temp = "";
            temp += s[i];
            for(int j = i + 1; j < s.size(); j++) temp += '0';
            ans.push_back(temp);
        }
    }

    cout << ans.size() << endl;
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
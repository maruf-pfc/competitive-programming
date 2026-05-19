// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/biweekly-contest-182/problems/minimum-flips-to-make-binary-string-coherent/description/
// Date: 2026-05-09

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
    int minFlips(string s) {
        int zero, one;
        zero = one = 0;

        for(auto c : s){
            if(c == '0') zero++;
            else one++;
        }

        string tmp = s;
        
        int c3;
        if(one == 0) c3 = 1;
        else c3 = one - 1;

        int c4 = INT_MAX;
        if(s.size() >= 2){
            int curr = 0;
            if(tmp[0] != '1') curr++;
            if(tmp[s.size() - 1] != '1') curr++;

            for(int i = 1; i < s.size() - 1; i++){
                if(tmp[i] != '0'){
                    curr++;
                }
            }

            c4 = curr;
        }

        return min({zero, one, c3, c4});
    }
};

void maruf(int t){
    
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
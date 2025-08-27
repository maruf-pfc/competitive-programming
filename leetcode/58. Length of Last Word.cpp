// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/length-of-last-word/description/
// Date: 2025-08-20

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string trim(const string &s) {
    int start = 0, end = s.size() - 1;

    while (start <= end && isspace(s[start])) start++;
    while (end >= start && isspace(s[end])) end--;

    return s.substr(start, end - start + 1);
}

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        s = trim(s);
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ' ') break;
            else cnt++;
        }
        return cnt;
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
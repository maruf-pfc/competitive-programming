// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/biweekly-contest-182/problems/score-validator/description/
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
    vector<int> scoreValidator(vector<string>& events) {
        int score, counter;
        score = counter = 0;

        for(auto c : events){
            if(counter >= 10) break;
            if(c == "W") counter++;
            else if(c == "WD" or c == "NB") score++;
            else {
                int n = stoi(c);
                score += n;
            }
        }

        return {score, counter};
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
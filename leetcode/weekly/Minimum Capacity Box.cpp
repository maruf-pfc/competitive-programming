// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/weekly-contest-492/problems/minimum-capacity-box/description/
// Date: 2026-03-17

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
    int minimumIndex(vector<int>& capacity, int itemSize) {
        map<int, int> mp;
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize){
                mp.insert({capacity[i], i});
            }
        }
        if(!mp.empty()){
            return mp.begin()->second;
        } 

        return -1;
    }
};

void maruf(int t){
    vector<int> capacity = {1, 5, 3, 7};

    int itemSize = 3;

    Solution sol;
    cout << sol.minimumIndex(capacity, itemSize) << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
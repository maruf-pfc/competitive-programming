// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/weekly-contest-500/problems/count-indices-with-opposite-parity/description/
// Date: 2026-05-04

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
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++){
                if((nums[i] % 2 != nums[j] % 2)){
                    res[i]++;
                }
            }
        }

        return res;
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
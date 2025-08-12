// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
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
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto i : nums){
            s.insert(i);
        }

        nums.clear();
        for(auto i : s){
            nums.emplace_back(i);
        }

        return nums.size();
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
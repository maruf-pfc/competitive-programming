// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/biweekly-contest-178/problems/first-unique-even-element/description/
// Date: 2026-03-14

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
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int x : nums) mp[x]++;

        for (int x : nums) {
            if (x % 2 == 0 && mp[x] == 1)   return x;
        }

        return -1;
    }
};

void maruf(int t){
    vector<int> nums = {3,4,2,5,4,6};
    Solution s;
    cout << s.firstUniqueEven(nums) << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
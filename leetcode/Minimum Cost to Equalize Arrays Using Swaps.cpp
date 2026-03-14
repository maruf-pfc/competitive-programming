// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/biweekly-contest-178/problems/minimum-cost-to-equalize-arrays-using-swaps/description/
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
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> cnt1, cnt2;
        for (int x : nums1) cnt1[x]++;
        for (int x : nums2) cnt2[x]++;

        unordered_set<int> keys;
        for (auto& [v, _] : cnt1) keys.insert(v);
        for (auto& [v, _] : cnt2) keys.insert(v);

        for (int v : keys) {
            int total = cnt1[v] + cnt2[v];
            if (total % 2 != 0) return -1;
        }

        int cost = 0;
        for (int v : keys) {
            int target = (cnt1[v] + cnt2[v]) / 2;
            if (cnt1[v] > target) cost += cnt1[v] - target;
        }

        return cost;
    }
};

void maruf(int t){
    vector<int> nums1 = {1,1,1};
    vector<int> nums2 = {1,2,3};
    Solution s;
    cout << s.minCost(nums1, nums2) << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
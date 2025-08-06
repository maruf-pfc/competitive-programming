// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/top-k-frequent-elements/
// Date: 2025-08-06

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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto i : nums) mp[i]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        for(auto [key, value] : mp){
            pq.emplace(value, key);
            if(pq.size() > k) pq.pop();
        }

        vector<int> res;
        while(!pq.empty()){
            int top = pq.top().second;
            res.emplace_back(top);
            pq.pop();
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
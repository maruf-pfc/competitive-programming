// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/group-anagrams/description/
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        if(strs.size() == 0) return res;
        
        map<string, vector<string>> mp;

        for(auto s : strs){
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        for(auto [key, value] : mp){
            res.push_back(value);
        }

        return res;
    }
};

void maruf(int t){
    Solution sol;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> anagrams = sol.groupAnagrams(strs);

    for (const auto& group : anagrams) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
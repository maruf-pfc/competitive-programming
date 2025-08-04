// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/two-sum/
// Date: 2025-08-03

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*
nums = {2, 7, 11, 15}
target = 9
unordered_map<int, int> mp;

i = 0 → nums[0] = 2
diff = 9 - 2 = 7
→ 7 not in map
→ so store: mp[2] = 0

i = 1 → nums[1] = 7
diff = 9 - 7 = 2
→ 2 is in map! → mp[2] = 0
→ return {0, 1}
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if(mp.find(diff) != mp.end()){
                res.push_back(mp[diff]);
                res.push_back(i);
                return res;
            }

            mp[nums[i]] = i;
        }

        return res;
    }
};

void maruf(int t){
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> res = sol.twoSum(nums, target);
    for (int i : res) cout << i << " ";
    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
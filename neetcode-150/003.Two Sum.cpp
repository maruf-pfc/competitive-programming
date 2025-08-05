// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/two-sum/description/
// Date: 2025-08-05

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

// Using Hashmap
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if(mp.find(diff) != mp.end()){
                return {mp[diff], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

// Using Binary Search
class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> v = nums;
        // sort(v.begin(), v.end());

        // for(int i = 0; i < v.size(); i++){
        //     int diff = target - v[i];

        //     // binary search
        //     int l = i + 1, r = v.size() - 1;
        //     while(l <= r){
        //         int mid = l + (r - l) / 2;
        //         if(v[mid] == diff){
        //             // need to write too many logic to find the actual indices
        //         }else if(v[mid] < diff) l = mid + 1;
        //         else r = mid - 1;
        //     }
        // }


        vector<pair<int, int>> v;
        for(int i = 0; i < nums.size(); i++){
            v.push_back({nums[i], i});
        }
        
        sort(v.begin(), v.end());

        // binary search
        for(int i = 0; i < v.size(); i++){
            int diff = target - v[i].first;

            // binary search
            int l = i + 1, r = v.size() - 1;
            while(l <= r){
                int mid = l + (r - l) / 2;
                if(v[mid].first == diff){
                    return {v[i].second, v[mid].second};
                }else if(v[mid].first < diff) l = mid + 1;
                else r = mid - 1;
            }
        }
        
        return {};
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
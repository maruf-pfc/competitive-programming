// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/weekly-contest-492/problems/find-the-smallest-balanced-index/description/
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
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();

        const long long LIMIT = 1e14;

        vector<long long> right(n + 1, 1);

        // build suffix products
        for (int i = n - 1; i >= 0; i--) {
            if (right[i + 1] > LIMIT / nums[i])
                right[i] = LIMIT + 1;
            else
                right[i] = right[i + 1] * nums[i];
        }

        long long leftSum = 0;

        for (int i = 0; i < n; i++) {
            long long rightProduct = (i + 1 < n) ? right[i + 1] : 1;

            if (leftSum == rightProduct)
                return i;

            leftSum += nums[i];
        }

        return -1;
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
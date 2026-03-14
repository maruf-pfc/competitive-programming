// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/biweekly-contest-178/problems/sum-of-gcd-of-formed-pairs/description/
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
private:
    int calcGcd(int a, int b) {
        while (b) {
            a %= b;
            swap(a, b);
        }
        return a;
    }

public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        vector<int> mx;
    
        int n = nums.size();

        int currMX = 0;
        for(int i = 0; i < n; i++) {
            currMX = max(currMX, nums[i]);
            mx.emplace_back(currMX);
        }

        for(int i = 0; i < n; i++) {
            prefixGcd.emplace_back(calcGcd(nums[i], mx[i]));
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long sum = 0;
        for(int i = 0; i < n / 2; i++) {
            sum += calcGcd(prefixGcd[i], prefixGcd[n - i - 1]);
        }

        return sum;
    }
};

void maruf(int t){
    vector<int> nums = {2,6,4};
    Solution s;
    cout << s.gcdSum(nums) << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) maruf(i);
}
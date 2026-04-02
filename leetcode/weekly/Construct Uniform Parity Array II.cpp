// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/weekly-contest-494/problems/construct-uniform-parity-array-ii/description/
// Date: 2026-03-23

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
    bool uniformArray(vector<int>& nums1) {
        int even, odd;
        even = odd = 0;

        for(auto i : nums1){
            if(i & 1){
                odd++;
            }else{
                even++;
            }
        }

        if(even == odd) return false;
        if((even == nums1.size() and !odd) or (!even and odd == nums1.size())) return true;
        return true;
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
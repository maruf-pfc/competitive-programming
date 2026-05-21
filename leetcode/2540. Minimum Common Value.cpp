// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/minimum-common-value/description/?envType=daily-question&envId=2026-05-19
// Date: 2026-05-20

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
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) return nums1[i];
            if (nums1[i] < nums2[j]) i++;
            else j++;
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
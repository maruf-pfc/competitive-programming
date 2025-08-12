// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=prshgx6i
// Date: 2025-08-09

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
    int addDigits(int num) {
        int ans = 0;
        while(num > 0){
            ans += num % 10;
            num /= 10;
            if(num == 0 && ans > 9){
                num = ans;
                ans = 0;
            }
        }
        return ans;
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
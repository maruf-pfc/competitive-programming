// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/weekly-contest-500/problems/sum-of-primes-between-number-and-its-reverse/description/
// Date: 2026-05-05

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
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        for(int i = 3; i * i <= n; i += 2){
            if(n % i == 0) return false;
        }
        return true;
    }
private:
    long long calcPrimeSum(int l, int r){
        long long sum = 0;
        for(int i = min(l, r); i <= max(l, r); i++){
            if(isPrime(i)){
                sum += i;
            }
        }
        return sum;
    }
public:
    int sumOfPrimesInRange(int n) {
        long long sum = 0;
        int r = 0, num = n;
        while(num){
            r = r * 10 + num % 10;
            num /= 10;
        }

        sum = calcPrimeSum(n, r);
        return sum;
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
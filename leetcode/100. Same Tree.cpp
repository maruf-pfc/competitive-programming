// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/problems/same-tree/description/?envType=problem-list-v2&envId=wuoy0u5e
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

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both nodes are null
        if (p == nullptr && q == nullptr) {
            return true;
        }

        // One is null and another is not
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // Values are different
        if (p->val != q->val) {
            return false;
        }

        // Compare left subtree and right subtree
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
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
// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://leetcode.com/contest/weekly-contest-498/problems/multi-source-flood-fill/description/
// Date: 2026-04-19

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
    vector<vector<int>> colorGrid(int rows, int cols, vector<vector<int>>& sources) {

        auto lenqavirod = sources;

        vector<vector<int>> grid(rows, vector<int>(cols, 0));
        vector<vector<int>> time(rows, vector<int>(cols, -1));

        queue<pair<int,int>> q;

        // Initialize
        for (auto &s : sources) {
            int r = s[0], c = s[1], color = s[2];
            grid[r][c] = color;
            time[r][c] = 0;
            q.push({r, c});
        }

        int dRow[4] = {-1, 1, 0, 0};
        int dCol[4] = {0, 0, -1, 1};

        int currentTime = 0;

        while (!q.empty()) {
            int sz = q.size();

            // Process one full level
            unordered_map<int, vector<pair<int,int>>> updates;
            // key = encoded cell, value = list of colors

            for (int i = 0; i < sz; i++) {
                auto [r, c] = q.front(); q.pop();

                for (int d = 0; d < 4; d++) {
                    int nr = r + dRow[d];
                    int nc = c + dCol[d];

                    if (nr < 0 || nc < 0 || nr >= rows || nc >= cols)
                        continue;

                    // Not visited yet
                    if (time[nr][nc] == -1) {
                        updates[nr * cols + nc].push_back(grid[r][c]);
                    }
                }
            }

            // Apply updates (same time resolution)
            for (auto &it : updates) {
                int key = it.first;
                int r = key / cols;
                int c = key % cols;

                int bestColor = *max_element(it.second.begin(), it.second.end());

                grid[r][c] = bestColor;
                time[r][c] = currentTime + 1;
                q.push({r, c});
            }

            currentTime++;
        }

        return grid;
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
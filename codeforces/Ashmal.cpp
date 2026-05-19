#include <bits/stdc++.h>
using namespace std;
// problem url: https://codeforces.com/problemset/problem/2180/B

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> str(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> str[i];
        }

        string s = str[1];
        for (int i = 2; i <= n; i++)
        {
            string front = str[i] + s;
            string back = s + str[i];

            s = min(front, back);
        }

        cout << s << endl;
    }
}
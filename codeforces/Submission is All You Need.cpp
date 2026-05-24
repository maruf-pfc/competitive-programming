// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://codeforces.com/contest/2130/problem/A
// Date: 2026-05-25

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define sz(x) (int)x.size()
#define mod 1000000007
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define dxR = {0, 0, 1, -1}
#define dyR = {1, -1, 0, 0}
#define dxQ = {0, 0, 1, -1, 1, 1, -1, -1}
#define dyQ = {1, -1, 0, 0, 1, -1, 1, -1}
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define setprecision(x) cout << fixed << setprecision(x)
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; mms(args); } while(0)
void mms(){cerr << endl;}
template<typename T>void mms(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void mms(T arg,const hello&...rest){cerr<<arg<<' ';mms(rest...);}

void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
bool isPrime(int n){ // TC: O(sqrt(n)), SC: O(1)
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

//-----------------------------------------------------------------------//
/*/TO GET SOMETHING YOU NEVER HAD YOU HAVE TO DO SOMETHING YOU NEVER DID/*/
//-----------------------------------------------------------------------//

class Solution {
public:
    
};

void maruf(int t){
    int n;
    cin >> n;
    vi v(n);
    for(auto &i : v) cin >> i;

    ll sum = 0;
    for(auto i : v) {
        sum += i;
        if(i == 0){
            sum++;
        }
    }
    cout << sum << endl;
}

int main() {
    clock_t z = clock();
    Maruf

    int t = 1;
    cin >> t;
    
    for(int i = 1; i <= t; i++) maruf(i);

    cerr << "Run Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC) << endl;
}
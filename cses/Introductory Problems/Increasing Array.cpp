// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://cses.fi/problemset/task/1094/
// Language: C++
// Date: 2026-05-22

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define sp " "
#define setprecision(x) cout << fixed << setprecision(x)
const double PI = acos(-1);
#define MOD 1000000007

// YES/NO - Yes/No - yes/no
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl

// Input
#define input(a) cin >> a
#define i2(a, b) cin >> a >> b
#define i3(a, b, c) cin >> a >> b >> c
#define i4(a, b, c, d) cin >> a >> b >> c >> d
// Output
#define print(a) cout << a << endl
#define p2(a, b) cout << a << sp << b << endl
#define p3(a, b, c) cout << a << sp << b << sp << c << endl
#define p4(a, b, c, d) cout << a << sp << b << sp << c << sp << d << endl

// Debugging
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; mms(args); } while(0)
void mms(){cerr << endl;}
template<typename T>void mms(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void mms(T arg,const hello&...rest){cerr<<arg<<' ';mms(rest...);}

// Utilities
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define cube(a) ((a) * (a) * (a))
#define rev(x) reverse(all(x))
#define sum(x) accumulate(all(x), 0)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

//-----------------------------------------------------------------------//
/*/TO GET SOMETHING YOU NEVER HAD YOU HAVE TO DO SOMETHING YOU NEVER DID/*/
//-----------------------------------------------------------------------//

void solve(){
    ll n;
    input(n);

    vector<ll> v(n);
    for(auto &i : v) cin >> i;

    
}

int main() {
    Maruf
    solve();
}
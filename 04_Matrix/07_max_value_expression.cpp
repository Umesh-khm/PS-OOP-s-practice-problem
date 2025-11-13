// Problem: Find max value of mat(c,d) - mat(a,b) for c>a and d>b
// Summary: Use suffix max table from bottom-right to top-left.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; vector<vector<long long>> a(n, vector<long long>(n));
    for(int i=0;i<n;++i) for(int j=0;j<n;++j) cin>>a[i][j];
    vector<vector<long long>> mx(n, vector<long long>(n));
    mx[n-1][n-1] = a[n-1][n-1];
    for(int i=n-2;i>=0;--i){ mx[i][n-1] = max(a[i][n-1], mx[i+1][n-1]); mx[n-1][i] = max(a[n-1][i], mx[n-1][i+1]); }
    long long ans = LLONG_MIN;
    for(int i=n-2;i>=0;--i){ for(int j=n-2;j>=0;--j){ ans = max(ans, mx[i+1][j+1] - a[i][j]); mx[i][j] = max({a[i][j], mx[i+1][j], mx[i][j+1]}); } }
    cout<<ans; return 0; }

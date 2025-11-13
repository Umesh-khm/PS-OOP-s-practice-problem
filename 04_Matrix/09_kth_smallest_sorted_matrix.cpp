// Problem: Kth smallest element in a row/column-wise sorted N x N matrix
// Summary: Binary search on value using counts via upper_bound per row.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; vector<vector<int>> a(n, vector<int>(n));
    int mn=INT_MAX, mx=INT_MIN; for(int i=0;i<n;++i){ for(int j=0;j<n;++j){ cin>>a[i][j]; mn=min(mn,a[i][j]); mx=max(mx,a[i][j]); }}
    int k; cin>>k; int lo=mn, hi=mx;
    while(lo<hi){ int mid = lo + (hi-lo)/2; long long cnt=0; for(int i=0;i<n;++i){ cnt += upper_bound(a[i].begin(), a[i].end(), mid) - a[i].begin(); }
        if(cnt<k) lo = mid + 1; else hi = mid; }
    cout<<lo; return 0; }

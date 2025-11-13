// Problem: Median in a row-wise sorted matrix
// Summary: Given R, C and row-wise sorted matrix, find median using value-based binary search.

#include <bits/stdc++.h>
using namespace std;

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int R,C; if(!(cin>>R>>C)) return 0; vector<vector<int>> a(R, vector<int>(C));
    int mn=INT_MAX, mx=INT_MIN;
    for(int i=0;i<R;++i){ for(int j=0;j<C;++j){ cin>>a[i][j]; mn=min(mn,a[i][j]); mx=max(mx,a[i][j]); }}
    int need = (R*C+1)/2; int lo=mn, hi=mx;
    while(lo<hi){ int mid = lo + (hi-lo)/2; long long cnt=0; for(int i=0;i<R;++i){ cnt += upper_bound(a[i].begin(), a[i].end(), mid) - a[i].begin(); }
        if(cnt < need) lo = mid + 1; else hi = mid; }
    cout<<lo; return 0; }

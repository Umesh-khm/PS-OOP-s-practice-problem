// Problem: Search an element in a matrix (each row sorted, first of row > last of previous)
// Summary: Binary search over flattened indices.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int m,n; if(!(cin>>m>>n)) return 0; vector<vector<long long>> a(m, vector<long long>(n));
    for(int i=0;i<m;++i) for(int j=0;j<n;++j) cin>>a[i][j]; long long target; cin>>target;
    long long lo=0, hi=1LL*m*n-1; bool found=false;
    while(lo<=hi){ long long mid=(lo+hi)/2; long long x=a[mid/n][mid%n];
        if(x==target){ found=true; break; } else if(x<target) lo=mid+1; else hi=mid-1; }
    cout<<(found?"YES":"NO"); return 0; }

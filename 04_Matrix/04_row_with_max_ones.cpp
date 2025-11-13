// Problem: Find row with maximum number of 1's (each row sorted)
// Summary: Return 0-based index of first row having maximum 1s; -1 if none.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0; vector<vector<int>> a(n, vector<int>(m));
    for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin>>a[i][j];
    int j=m-1, best=-1; for(int i=0;i<n;++i){ while(j>=0 && a[i][j]==1){ best=i; --j; } }
    cout<<best; return 0; }

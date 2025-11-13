// Problem: Print elements in sorted order using row-column wise sorted matrix
// Summary: Given n (square) and matrix, output all elements in increasing order.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; vector<long long> v; v.reserve(1LL*n*n);
    for(int i=0;i<n;++i){ for(int j=0;j<n;++j){ long long x; cin>>x; v.push_back(x);} }
    sort(v.begin(), v.end());
    for(size_t i=0;i<v.size(); ++i){ if(i) cout<<' '; cout<<v[i]; }
    return 0; }

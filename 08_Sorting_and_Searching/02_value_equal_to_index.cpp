// Problem: Value equal to index (1-based)
// Summary: Print all 1-based indices i such that a[i-1] == i; if none, print -1.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i]; bool any=false; for(int i=0;i<n;++i){ if(a[i]==i+1){ if(any) cout<<' '; cout<<(i+1); any=true; } } if(!any) cout<<-1; }

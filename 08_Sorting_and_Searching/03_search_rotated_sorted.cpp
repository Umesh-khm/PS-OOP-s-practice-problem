// Problem: Search in a rotated sorted array (distinct values)
// Summary: Return index of target or -1.

#include <bits/stdc++.h>
using namespace std; 
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i]; long long target; cin>>target; int l=0,r=n-1; while(l<=r){ int m=(l+r)/2; if(a[m]==target){ cout<<m; return 0;} if(a[l]<=a[m]){ if(a[l]<=target && target<a[m]) r=m-1; else l=m+1; } else { if(a[m]<target && target<=a[r]) l=m+1; else r=m-1; } } cout<<-1; }

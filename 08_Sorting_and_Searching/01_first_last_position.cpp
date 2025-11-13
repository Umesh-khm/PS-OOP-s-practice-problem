// Problem: First and last positions of an element in a sorted array
// Summary: Given n, array, and x, print first and last index (0-based) or -1 -1 if not found.

#include <bits/stdc++.h>
using namespace std; 
static int lowerIdx(const vector<long long>& a, long long x){ int l=0,r=(int)a.size()-1,ans=-1; while(l<=r){ int m=(l+r)/2; if(a[m]>=x){ if(a[m]==x) ans=m; r=m-1; } else l=m+1; } return ans; }
static int upperIdx(const vector<long long>& a, long long x){ int l=0,r=(int)a.size()-1,ans=-1; while(l<=r){ int m=(l+r)/2; if(a[m]<=x){ if(a[m]==x) ans=m; l=m+1; } else r=m-1; } return ans; }
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i]; long long x; cin>>x; int l=lowerIdx(a,x), r=upperIdx(a,x); if(l==-1) cout<<-1<<" "<<-1; else cout<<l<<" "<<r; }

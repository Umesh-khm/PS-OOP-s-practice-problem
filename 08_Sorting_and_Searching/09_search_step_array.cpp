// Problem: Search in array where adjacent differ by at most k
// Summary: Jump by max(1, |a[i]-x|/k) steps.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int n; long long k; if(!(cin>>n>>k)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i]; long long x; cin>>x; int i=0; while(i<n){ if(a[i]==x){ cout<<i; return 0; } long long diff = llabs(a[i]-x); i += max(1LL, diff / k); } cout<<-1; }

// Problem: Majority element (> n/2 occurrences)
// Summary: Boyer-Moore majority vote; verify.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i]; long long cand=0; int cnt=0; for(long long v: a){ if(cnt==0){ cand=v; cnt=1; } else cnt += (v==cand?1:-1); } int occ=0; for(long long v: a) if(v==cand) occ++; if(occ>n/2) cout<<cand; else cout<<-1; }

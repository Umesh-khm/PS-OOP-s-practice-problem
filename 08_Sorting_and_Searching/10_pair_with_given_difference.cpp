// Problem: Find a pair with a given difference N
// Summary: Given L, array and diff D, determine if any pair has abs difference D; print one pair or NO.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int L; if(!(cin>>L)) return 0; vector<long long>a(L); for(int i=0;i<L;++i) cin>>a[i]; long long D; cin>>D; sort(a.begin(), a.end()); int i=0,j=1; while(i<L && j<L){ if(i==j){ j++; continue; } long long diff = llabs(a[j]-a[i]); if(diff==D){ cout<<a[i]<<" "<<a[j]; return 0; } else if(diff<D) j++; else i++; } cout<<"NO"; }

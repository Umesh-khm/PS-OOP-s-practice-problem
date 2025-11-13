// Problem: Find the repeating and the missing number (1..N once each except one missing and one repeating)
// Summary: Use XOR partition method.

#include <bits/stdc++.h>
using namespace std; 
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i]; long long xr=0; for(int i=0;i<n;++i) xr^=a[i]; for(int i=1;i<=n;++i) xr^=i; long long rsb = xr & -xr; long long x=0,y=0; for(long long v: a){ if(v & rsb) x^=v; else y^=v; } for(int i=1;i<=n;++i){ if(i & rsb) x^=i; else y^=i; } // Now x and y are missing and repeating in some order
    long long missing, repeating; long long cnt=0; for(long long v: a) if(v==x) cnt++; if(cnt==2){ repeating=x; missing=y; } else { repeating=y; missing=x; }
    cout<<repeating<<" "<<missing; }

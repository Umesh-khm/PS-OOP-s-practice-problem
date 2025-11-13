// Problem: Find the two non-repeating elements in array where others appear twice
// Summary: XOR all, partition by rightmost set bit, XOR groups; print in increasing order.

#include <bits/stdc++.h>
using namespace std; 
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i];
    long long xr=0; for(long long v: a) xr ^= v; long long rsb = xr & -xr; long long x=0,y=0; for(long long v:a){ if(v & rsb) x^=v; else y^=v; }
    if(x>y) swap(x,y); cout<<x<<" "<<y; return 0; }

// Problem: Copy set bits in range [l, r] (1-based) from y to x
// Summary: Given x,y,l,r, set in x the bits that are set in y in the range.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); unsigned long long x,y; int l,r; if(!(cin>>x>>y>>l>>r)) return 0; unsigned long long mask = 0; for(int i=l-1;i<=r-1;++i) mask |= (1ULL<<i); x |= (y & mask); cout<<x; }

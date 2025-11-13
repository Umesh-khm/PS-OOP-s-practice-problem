// Problem: Move all negative numbers to one side (constant extra space)
// Summary: Two-pointer partition (order not preserved).

#include <iostream>
using namespace std;
static inline void swpl(long long &x,long long &y){ long long t=x;x=y;y=t; }
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<0) n=0; long long* a = (n>0)? new long long[n]:nullptr; for(int i=0;i<n;++i) cin>>a[i];
    int l=0, r=n-1; while(l<=r){ if(a[l]<0) ++l; else if(a[r]>=0) --r; else { swpl(a[l],a[r]); ++l; --r; } }
    for(int i=0;i<n;++i){ if(i) cout<<' '; cout<<a[i]; } if(a) delete[] a; return 0; }

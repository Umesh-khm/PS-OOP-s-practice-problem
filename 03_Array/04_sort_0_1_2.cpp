// Problem: Sort array of 0s,1s,2s without comparison sort
// Summary: Dutch National Flag algorithm.

#include <iostream>
using namespace std;
static inline void iswp(int &x,int &y){ int t=x;x=y;y=t; }
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<0) n=0; int* a = (n>0)? new int[n]:nullptr; for(int i=0;i<n;++i) cin>>a[i];
    int l=0, m=0, r=n-1; while(m<=r){ if(a[m]==0) { iswp(a[l],a[m]); ++l; ++m; } else if(a[m]==1) { ++m; } else { iswp(a[m],a[r]); --r; } }
    for(int i=0;i<n;++i){ if(i) cout<<' '; cout<<a[i]; } if(a) delete[] a; return 0; }

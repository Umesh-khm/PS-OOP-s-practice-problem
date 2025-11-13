// Problem: Kth smallest element (distinct elements)
// Summary: Given n, array, and k (1-indexed), print the kth smallest without STL.

#include <iostream>
using namespace std;

static inline void swp(long long &x,long long &y){ long long t=x; x=y; y=t; }
static int partition_ll(long long *a, int l, int r){
    long long pivot = a[r]; int i=l;
    for(int j=l;j<r;++j){ if(a[j]<=pivot){ swp(a[i],a[j]); ++i; } }
    swp(a[i],a[r]); return i;
}
static long long quickselect(long long *a, int l, int r, int k){
    while(true){ int p = partition_ll(a,l,r); if(p==k) return a[p]; if(k<p) r=p-1; else l=p+1; }
}

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,k; if(!(cin>>n>>k)) return 0; if(n<=0) return 0; long long* a = new long long[n]; for(int i=0;i<n;++i) cin>>a[i];
    if(k<1||k>n){ delete[] a; return 0; }
    long long ans = quickselect(a, 0, n-1, k-1);
    cout<<ans; delete[] a; return 0; }

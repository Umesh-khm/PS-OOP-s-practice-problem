// Problem: Minimize the maximum difference between heights after +/- K
// Summary: Given n, K, and array of heights, adjust each by +K or -K (no negatives)
// to minimize max-min. Classic greedy after sorting.

#include <iostream>
using namespace std;

static inline void swp_ll(long long &x, long long &y){ long long t=x; x=y; y=t; }

static int partition_ll(long long *a, int l, int r){
    long long pivot = a[r];
    int i = l;
    for(int j=l; j<r; ++j){ if(a[j] <= pivot){ swp_ll(a[i], a[j]); ++i; } }
    swp_ll(a[i], a[r]);
    return i;
}

static void quicksort_ll(long long *a, int l, int r){
    while(l<r){
        int p = partition_ll(a, l, r);
        if(p - l < r - p){ quicksort_ll(a, l, p-1); l = p + 1; }
        else { quicksort_ll(a, p+1, r); r = p - 1; }
    }
}

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long K; if(!(cin>>n>>K)) return 0; if(n<=0){ cout<<0; return 0; }
    long long* a = new long long[n];
    for(int i=0;i<n;++i) cin>>a[i];
    if(n==1){ cout<<0; if(a) delete[] a; return 0; }
    quicksort_ll(a, 0, n-1);
    long long ans = a[n-1] - a[0];
    long long small = a[0] + K;
    long long big = a[n-1] - K;
    if(small > big){ long long t = small; small = big; big = t; }
    for(int i=1; i<=n-2; ++i){
        long long subtract = a[i] - K;
        long long add = a[i] + K;
        if(subtract >= small || add <= big) continue;
        long long leftGap = big - subtract;
        long long rightGap = add - small;
        if(leftGap <= rightGap) small = subtract; else big = add;
    }
    long long diff = big - small;
    long long res = (ans < diff ? ans : diff);
    cout<<res;
    if(a) delete[] a;
    return 0; }

// Problem: Maximum Subarray Sum (Kadane)
// Summary: Given n and array, output largest sum of any contiguous subarray.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<=0) return 0; long long* a = new long long[n]; for(int i=0;i<n;++i) cin>>a[i];
    long long best = a[0], cur = a[0];
    for(int i=1;i<n;++i){ long long x=a[i]; long long t1 = cur + x; cur = (x>t1? x : t1); best = (best>cur? best : cur); }
    cout<<best; delete[] a; return 0; }

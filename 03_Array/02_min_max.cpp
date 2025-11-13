// Problem: Max and Min from an array with minimal comparisons
// Summary: Read n and array; output min and max values.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<=0) return 0; long long* a = new long long[n]; for(int i=0;i<n;++i) cin>>a[i];
    long long mn=a[0], mx=a[0];
    for(int i=1;i<n;++i){ if(a[i]<mn) mn=a[i]; if(a[i]>mx) mx=a[i]; }
    cout<<mn<<" "<<mx; delete[] a; return 0; }

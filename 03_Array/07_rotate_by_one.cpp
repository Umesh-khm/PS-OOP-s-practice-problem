// Problem: Cyclically rotate array by one (clockwise)
// Summary: Move last element to front.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<0) n=0; long long* a = (n>0)? new long long[n]:nullptr; for(int i=0;i<n;++i) cin>>a[i];
    if(n>0){ long long last = a[n-1]; for(int i=n-1;i>0;--i) a[i]=a[i-1]; a[0]=last; }
    for(int i=0;i<n;++i){ if(i) cout<<' '; cout<<a[i]; } if(a) delete[] a; return 0; }

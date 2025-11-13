// Problem: Reverse the array
// Summary: Read n and array elements; print them in reverse order.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<0) n=0; long long* a = (n>0)? new long long[n] : nullptr; for(int i=0;i<n;++i) cin>>a[i];
    for(int i=n-1;i>=0;--i){ if(i!=n-1) cout<<' '; cout<<a[i]; }
    if(a) delete[] a; return 0; }

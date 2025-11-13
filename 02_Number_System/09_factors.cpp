// Problem: Factors of a Number
// Summary: Given n, print all positive factors in increasing order.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; if(!(cin>>n)) return 0; if(n==0){ cout<<0; return 0; }
    n = (n<0)?-n:n;
    long long root = 1; while((root+1)*(root+1) <= n) ++root;
    long long cap = root + 5;
    long long *large = new long long[cap]; long long lc = 0;
    for(long long i=1;i*i<=n;++i){ if(n%i==0){ cout<<i<<" "; if(i*i!=n){ if(lc<cap) large[lc++] = n/i; } } }
    for(long long i=lc-1;i>=0;--i) cout<<large[i]<<" ";
    delete[] large;
    return 0; }

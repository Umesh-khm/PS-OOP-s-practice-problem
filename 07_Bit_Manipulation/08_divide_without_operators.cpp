// Problem: Divide two integers without using *, /, %
// Summary: Use bit shifting long division; handle sign and overflow.

#include <bits/stdc++.h>
using namespace std; 
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long a,b; if(!(cin>>a>>b)) return 0; if(b==0){ cout<<"INF"; return 0; }
    bool neg = ( (a<0) ^ (b<0) ); unsigned long long A = llabs(a), B = llabs(b);
    unsigned long long q=0; for(int i=63;i>=0;--i){ if( (A>>i) >= B ){ A -= (B<<i); q |= (1ULL<<i); } }
    long long res = (long long)q; if(neg) res = -res; cout<<res; return 0; }

// Problem: Calculate square of a number without using *, /, pow()
// Summary: Use Russian peasant multiplication x*x with bit operations.

#include <bits/stdc++.h>
using namespace std; 
static unsigned long long mul(unsigned long long x, unsigned long long y){ unsigned long long res=0; while(y){ if(y&1ULL) res+=x; x<<=1; y>>=1; } return res; }
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); long long n; if(!(cin>>n)) return 0; bool neg=false; if(n<0){ neg=true; n=-n; } unsigned long long x=n; unsigned long long sq = mul(x,x); cout<<sq; return 0; }

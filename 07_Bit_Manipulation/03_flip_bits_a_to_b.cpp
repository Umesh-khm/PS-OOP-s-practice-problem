// Problem: Count number of bits to flip to convert A to B
// Summary: Count set bits in A XOR B.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); unsigned long long A,B; if(!(cin>>A>>B)) return 0; unsigned long long X=A^B; int c=0; while(X){ X&=X-1; ++c;} cout<<c; }

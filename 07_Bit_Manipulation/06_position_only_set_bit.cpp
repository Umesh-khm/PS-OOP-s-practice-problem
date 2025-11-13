// Problem: Position of the only set bit (1-indexed from LSB), else -1
// Summary: If n is power of two, position = index+1 of set bit.

#include <bits/stdc++.h>
using namespace std; 
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); unsigned long long n; if(!(cin>>n)) return 0; if(n==0 || (n & (n-1))) { cout<<-1; return 0; } int pos=1; while((n&1ULL)==0){ n>>=1; ++pos; } cout<<pos; }

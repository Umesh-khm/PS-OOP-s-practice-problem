// Problem: Check if number is power of 2
// Summary: n>0 and (n & (n-1))==0.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); unsigned long long n; if(!(cin>>n)) return 0; cout<< ( (n && !(n&(n-1)))?"YES":"NO" ); }

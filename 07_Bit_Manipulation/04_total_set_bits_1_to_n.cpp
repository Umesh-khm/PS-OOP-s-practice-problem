// Problem: Count total set bits in all numbers from 1 to N
// Summary: Use bit DP formula summing bits per position.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long N; if(!(cin>>N)) return 0; long long total=0; 
    for(long long b=0; (1LL<<b) <= N; ++b){ long long cycle = 1LL<<(b+1); long long full = (N+1)/cycle; long long rem = (N+1)%cycle; total += full * (cycle/2) + max(0LL, rem - (cycle/2)); }
    cout<<total; return 0; }

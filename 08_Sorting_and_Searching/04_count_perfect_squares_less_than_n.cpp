// Problem: Number of perfect squares less than N
// Summary: Count of k such that k^2 < N is floor(sqrt(N-1)).

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); long long N; if(!(cin>>N)) return 0; if(N<=1){ cout<<0; return 0; } long long ans = (long long)floor(sqrt((long double)(N-1))); cout<<ans; }

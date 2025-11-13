// Problem: BURGERS (Math)
// Summary: For T cases, print min(A,B).

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int T; if(!(cin>>T)) return 0; while(T--){ long long A,B; cin>>A>>B; cout<<min(A,B)<<"\n"; } }

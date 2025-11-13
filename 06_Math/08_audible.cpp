// Problem: AUDIBLE (Math)
// Summary: YES if 67 <= X <= 45000 else NO.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int T; if(!(cin>>T)) return 0; while(T--){ long long X; cin>>X; cout<< ( (X>=67 && X<=45000)?"YES":"NO" ) <<"\n"; } }

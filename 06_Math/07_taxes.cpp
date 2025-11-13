// Problem: TAXES (Math)
// Summary: If X > 100, print X - 10 else X.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int T; if(!(cin>>T)) return 0; while(T--){ long long X; cin>>X; cout<< ( X>100 ? X-10 : X ) <<"\n"; } }

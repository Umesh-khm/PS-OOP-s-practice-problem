// Problem: IPLTRSH (Math)
// Summary: Given N students and M tickets, print students who won't get tickets: max(0, N - M).

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int T; if(!(cin>>T)) return 0; while(T--){ long long N,M; cin>>N>>M; cout<< (N>M? N-M : 0) <<"\n"; } }
// Problem: IPLTRSH (Math)
// Summary: For T cases, print max(0, N - M).

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int T; if(!(cin>>T)) return 0; while(T--){ long long N,M; cin>>N>>M; cout<< ( (N>M)? (N-M):0 ) <<"\n"; } }

// Problem: DETSCORE (Math)
// Summary: Score = (X/10) * N where each of 10 test cases has equal points; simpler form: (N * (X/10)). But original: X points and N passed among 10 -> score = N*(X/10).

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int T; if(!(cin>>T)) return 0; while(T--){ long long X,N; cin>>X>>N; cout<< ( (X/10) * N ) <<"\n"; } }

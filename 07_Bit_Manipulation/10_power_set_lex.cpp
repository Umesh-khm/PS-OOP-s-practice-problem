// Problem: Power Set (all subsequences) in lexicographically sorted order
// Summary: Given string S, print all subsequences sorted lex order.

#include <bits/stdc++.h>
using namespace std;

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string S; getline(cin,S); int n=S.size(); vector<string> out; out.reserve(1<<min(n,20));
    sort(S.begin(), S.end()); long long total = 1LL<<n; for(long long mask=0; mask<total; ++mask){ string t; for(int i=0;i<n;++i) if(mask&(1LL<<i)) t.push_back(S[i]); out.push_back(t); }
    sort(out.begin(), out.end()); for(auto &s: out) cout<<s<<"\n"; return 0; }

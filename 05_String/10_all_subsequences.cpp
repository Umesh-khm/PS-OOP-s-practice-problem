// Problem: All subsequences of a string
// Summary: Given string s, print all subsequences (including empty) one per line.

#include <bits/stdc++.h>
using namespace std;

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin,s); int n=s.size(); long long total = 1LL<<n; 
    for(long long mask=0; mask<total; ++mask){ string t; for(int i=0;i<n;++i){ if(mask & (1LL<<i)) t.push_back(s[i]); } cout<<t<<"\n"; }
    return 0; }

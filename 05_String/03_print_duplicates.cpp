// Problem: Find duplicate characters in string and their counts
// Summary: Print char:count for characters occurring more than once.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s); unordered_map<char,int> f; for(char c: s) f[c]++; bool any=false;
    for(auto &p: f){ if(p.second>1){ any=true; cout<<p.first<<":"<<p.second<<"\n"; } }
    if(!any) cout<<"None"; return 0; }

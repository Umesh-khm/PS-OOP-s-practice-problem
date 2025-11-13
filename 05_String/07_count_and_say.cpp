// Problem: Count and Say sequence
// Summary: Given n, print nth term starting with "1".

#include <bits/stdc++.h>
using namespace std;

static string nextTerm(const string &s){ string out; int i=0,n=s.size(); while(i<n){ int j=i; while(j<n && s[j]==s[i]) ++j; out += to_string(j-i); out.push_back(s[i]); i=j; } return out; }

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<=0){ return 0; } string s="1"; for(int i=1;i<n;++i) s = nextTerm(s); cout<<s; return 0; }

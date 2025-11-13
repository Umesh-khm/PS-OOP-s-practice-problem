// Problem: Longest palindromic substring
// Summary: Expand around center to find longest palindrome in O(n^2).

#include <bits/stdc++.h>
using namespace std;

static pair<int,int> expand(const string& s, int l, int r){ while(l>=0 && r<(int)s.size() && s[l]==s[r]){ --l; ++r; } return {l+1, r-1}; }

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s); if(s.empty()){ return 0; }
    int bestL=0, bestR=0; for(int i=0;i<(int)s.size(); ++i){ auto p1=expand(s,i,i); if(p1.second-p1.first>bestR-bestL){ bestL=p1.first; bestR=p1.second; } auto p2=expand(s,i,i+1); if(p2.second-p2.first>bestR-bestL){ bestL=p2.first; bestR=p2.second; } }
    cout<<s.substr(bestL, bestR-bestL+1); return 0; }

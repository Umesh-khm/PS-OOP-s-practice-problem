// Problem: Common elements in all rows of a matrix
// Summary: Given r, c and matrix, print elements present in every row (any order).

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int r,c; if(!(cin>>r>>c)) return 0; vector<vector<int>> a(r, vector<int>(c));
    for(int i=0;i<r;++i) for(int j=0;j<c;++j) cin>>a[i][j];
    unordered_map<int,int> cnt; cnt.reserve(r*c*2);
    for(int j=0;j<c;++j) cnt[a[0][j]] = 1; 
    for(int i=1;i<r;++i){ unordered_set<int> seen; seen.reserve(c*2);
        for(int j=0;j<c;++j){ int x=a[i][j]; if(seen.insert(x).second){ auto it=cnt.find(x); if(it!=cnt.end() && it->second==i) it->second++; } }
    }
    bool first=true; for(auto &p: cnt){ if(p.second==r){ if(!first) cout<<' '; cout<<p.first; first=false; } }
    return 0; }

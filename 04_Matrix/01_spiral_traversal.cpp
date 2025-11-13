// Problem: Spiral traversal on a Matrix
// Summary: Given r, c and matrix, print elements in spiral order.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int r,c; if(!(cin>>r>>c)) return 0; vector<vector<long long>> a(r, vector<long long>(c));
    for(int i=0;i<r;++i) for(int j=0;j<c;++j) cin>>a[i][j];
    int top=0, bottom=r-1, left=0, right=c-1; vector<long long> out; out.reserve(r*c);
    while(top<=bottom && left<=right){
        for(int j=left;j<=right;++j) out.push_back(a[top][j]); top++;
        for(int i=top;i<=bottom && left<=right;++i) out.push_back(a[i][right]); right--;
        if(top<=bottom){ for(int j=right;j>=left;--j) out.push_back(a[bottom][j]); bottom--; }
        if(left<=right){ for(int i=bottom;i>=top;--i) out.push_back(a[i][left]); left++; }
    }
    for(size_t i=0;i<out.size();++i){ if(i) cout<<' '; cout<<out[i]; }
    return 0; }

// Problem: Maximum size rectangle of 1s in a binary matrix
// Summary: Use histogram technique with stack per row to compute max area.

#include <bits/stdc++.h>
using namespace std;

static long long maxHist(vector<int>& h){
    stack<int> st; long long best=0; int n=h.size();
    for(int i=0;i<=n;++i){ int cur = (i==n? 0 : h[i]);
        while(!st.empty() && cur < h[st.top()]){ int top=st.top(); st.pop(); long long width = st.empty()? i : (i - st.top() - 1); best=max(best, 1LL*h[top]*width); }
        st.push(i);
    }
    return best;
}

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int r,c; if(!(cin>>r>>c)) return 0; vector<vector<int>> a(r, vector<int>(c));
    for(int i=0;i<r;++i) for(int j=0;j<c;++j) cin>>a[i][j];
    vector<int> h(c,0); long long ans=0;
    for(int i=0;i<r;++i){ for(int j=0;j<c;++j) h[j] = (a[i][j]==0? 0 : h[j]+1); ans=max(ans, maxHist(h)); }
    cout<<ans; return 0; }

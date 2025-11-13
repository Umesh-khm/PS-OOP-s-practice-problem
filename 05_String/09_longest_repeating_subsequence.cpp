// Problem: Longest repeating subsequence length
// Summary: LRS length equals LCS(s, s) with i!=j constraint.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin,s); int n=s.size(); vector<vector<int>> dp(n+1, vector<int>(n+1,0));
    for(int i=1;i<=n;++i){ for(int j=1;j<=n;++j){ if(s[i-1]==s[j-1] && i!=j) dp[i][j]=1+dp[i-1][j-1]; else dp[i][j]=max(dp[i-1][j], dp[i][j-1]); } }
    cout<<dp[n][n]; return 0; }

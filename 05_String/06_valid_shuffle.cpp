// Problem: Valid shuffle of two strings
// Summary: Given s1, s2, s3; check if s3 is a valid shuffle (interleaving) of s1 and s2.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s1,s2,s3; getline(cin,s1); getline(cin,s2); getline(cin,s3);
    if(s1.size()+s2.size()!=s3.size()){ cout<<"NO"; return 0; }
    int n=s1.size(), m=s2.size();
    vector<vector<char>> dp(n+1, vector<char>(m+1,false)); dp[0][0]=true;
    for(int i=0;i<=n;++i){ for(int j=0;j<=m;++j){ if(i==0&&j==0) continue; bool ok=false; if(i>0 && dp[i-1][j] && s1[i-1]==s3[i+j-1]) ok=true; if(j>0 && dp[i][j-1] && s2[j-1]==s3[i+j-1]) ok=true; dp[i][j]=ok; } }
    cout<<(dp[n][m]?"YES":"NO"); return 0; }

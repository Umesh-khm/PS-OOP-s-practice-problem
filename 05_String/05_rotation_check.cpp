// Problem: Check if s2 is a rotation of s1
// Summary: s2 is rotation if len equal and s2 is substring of s1+s1.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s1,s2; getline(cin,s1); getline(cin,s2);
    if(s1.size()!=s2.size()){ cout<<"NO"; return 0; }
    string ss = s1 + s1; cout<<( (ss.find(s2)!=string::npos)?"YES":"NO" ); return 0; }

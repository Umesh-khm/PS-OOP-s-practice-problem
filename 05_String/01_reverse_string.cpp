// Problem: Reverse a String
// Summary: Read a line and print its reverse.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s); if(!cin && s.size()==0) return 0; 
    reverse(s.begin(), s.end()); cout<<s; return 0; }

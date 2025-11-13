// Problem: Check whether given string is immutable
// Summary: Demonstrate mutability in C++ by modifying the first character and printing result.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s); if(s.empty()){ cout<<"MUTABLE"; return 0; }
    char orig = s[0]; s[0] = (orig=='+')?'-': (orig=='a'?'b':'a');
    cout<<"MUTABLE\n"<<s; return 0; }

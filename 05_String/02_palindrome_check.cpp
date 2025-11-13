// Problem: Check whether a String is Palindrome or not
// Summary: Read string (line), ignore newlines, check palindrome.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; getline(cin, s); if(s.size()==0) return 0; 
    string t=s; reverse(t.begin(), t.end()); cout<<((t==s)?"YES":"NO"); return 0; }

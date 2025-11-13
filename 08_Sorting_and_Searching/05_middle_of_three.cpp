// Problem: Middle of three numbers
// Summary: Given A,B,C print the middle value.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); long long A,B,C; if(!(cin>>A>>B>>C)) return 0; long long mn=min({A,B,C}), mx=max({A,B,C}); cout<<(A^B^C ^ mn ^ mx); }

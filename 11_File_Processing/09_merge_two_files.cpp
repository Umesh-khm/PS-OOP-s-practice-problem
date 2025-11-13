// Program: Merge two files into third
// Summary: Concatenate file A and file B into file C.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string A,B,C; getline(cin,A); if(A.empty()&&cin.good()) getline(cin,A); getline(cin,B); getline(cin,C); ifstream a(A, ios::binary), b(B, ios::binary); ofstream c(C, ios::binary); c<<a.rdbuf()<<b.rdbuf(); cout<<"MERGED"; }

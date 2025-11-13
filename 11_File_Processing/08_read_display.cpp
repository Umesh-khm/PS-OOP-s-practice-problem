// Program: Read and Display file
// Summary: Dump file contents to stdout.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string file; getline(cin,file); if(file.empty()&&cin.good()) getline(cin,file); ifstream in(file, ios::binary); cout<<in.rdbuf(); }

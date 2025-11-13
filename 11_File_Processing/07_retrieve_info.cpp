// Program: Retrieve information from the file
// Summary: Read file and print lines with line numbers.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string file; getline(cin,file); if(file.empty()&&cin.good()) getline(cin,file); ifstream in(file); string line; int i=1; while(getline(in,line)){ cout<<i++<<": "<<line<<"\n"; } }

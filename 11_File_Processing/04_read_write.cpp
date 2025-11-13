// Program: Read and Write File Operation
// Summary: Read entire input file and write to output file.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string inF,outF; getline(cin,inF); if(inF.empty()&&cin.good()) getline(cin,inF); getline(cin,outF); ifstream in(inF, ios::binary); ofstream out(outF, ios::binary); out<<in.rdbuf(); cout<<"DONE"; }

// Program: Encrypt Files using File Handling
// Summary: Caesar-shift each byte by K modulo 256 to output file.

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string inF,outF; int K; getline(cin,inF); if(inF.empty()&&cin.good()) getline(cin,inF); getline(cin,outF); cin>>K; ifstream in(inF, ios::binary); ofstream out(outF, ios::binary); char ch; while(in.get(ch)){ unsigned char u = static_cast<unsigned char>(ch); u = (unsigned char)((u + K) & 0xFF); out.put((char)u); } cout<<"ENCRYPTED"; }

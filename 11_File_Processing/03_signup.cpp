// Program: Registration (Signup) using File Handling
// Summary: Append username and hashed-like placeholder to a file.

#include <bits/stdc++.h>
using namespace std;
static string simple_hash(const string& s){ unsigned long long h=1469598103934665603ull; for(unsigned char c: s){ h^=c; h*=1099511628211ull; } stringstream ss; ss<<hex<<h; return ss.str(); }
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string file; getline(cin,file); if(file.empty()&&cin.good()) getline(cin,file); string user, pass; getline(cin,user); getline(cin,pass); ofstream out(file, ios::app); out<<user<<","<<simple_hash(pass)<<"\n"; out.close(); cout<<"OK"; }

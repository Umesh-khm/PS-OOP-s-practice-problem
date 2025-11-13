// Program: Store/Enter Data to file
// Summary: Read N lines and write to file (overwrite).

#include <bits/stdc++.h>
using namespace std; int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string file; int n; getline(cin,file); if(file.empty()&&cin.good()) getline(cin,file); cin>>n; cin.ignore(numeric_limits<streamsize>::max(),'\n'); ofstream out(file, ios::trunc); for(int i=0;i<n;++i){ string line; getline(cin,line); out<<line<<"\n"; } cout<<"SAVED"; }

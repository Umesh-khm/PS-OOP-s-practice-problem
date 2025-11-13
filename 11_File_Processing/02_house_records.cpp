// Program: Maintain House Records using File Handling
// Summary: Write/read simple CSV of house (id,address,price).

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string file; int n; getline(cin,file); if(file.empty()&&cin.good()) getline(cin,file); cin>>n; cin.ignore(numeric_limits<streamsize>::max(),'\n');
    ofstream out(file, ios::app); for(int i=0;i<n;++i){ string id, addr; long long price; getline(cin,id); getline(cin,addr); cin>>price; cin.ignore(numeric_limits<streamsize>::max(),'\n'); out<<id<<","<<addr<<","<<price<<"\n"; } out.close();
    ifstream in(file); string line; while(getline(in,line)) cout<<line<<"\n"; }

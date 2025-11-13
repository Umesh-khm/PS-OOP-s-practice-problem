// Program: Maintain Book Record using File Handling
// Summary: Append simple book entries (title, author) to a text file and then display all.

#include <bits/stdc++.h>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    string filename; int n; getline(cin, filename); if(filename.empty()&&cin.good()) getline(cin, filename); cin>>n; cin.ignore(numeric_limits<streamsize>::max(),'\n');
    ofstream out(filename, ios::app);
    for(int i=0;i<n;++i){ string title, author; getline(cin,title); getline(cin,author); out<<title<<"|"<<author<<"\n"; }
    out.close();
    ifstream in(filename); string line; while(getline(in,line)) cout<<line<<"\n"; }

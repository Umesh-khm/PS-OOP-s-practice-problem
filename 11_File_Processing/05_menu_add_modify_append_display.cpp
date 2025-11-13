// Program: Menu Driven Add/Modify/Append/Display
// Summary: Simple menu for a text database of "id|name" records.

#include <bits/stdc++.h>
using namespace std;
static vector<pair<string,string>> loadDB(const string& file){ vector<pair<string,string>> v; ifstream in(file); string line; while(getline(in,line)){ auto p=line.find('|'); if(p!=string::npos) v.push_back({line.substr(0,p), line.substr(p+1)}); } return v; }
static void saveDB(const string& file, const vector<pair<string,string>>& v){ ofstream out(file, ios::trunc); for(auto &e:v) out<<e.first<<"|"<<e.second<<"\n"; }
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); string file; getline(cin,file); if(file.empty()&&cin.good()) getline(cin,file); vector<pair<string,string>> db = loadDB(file); int q; cin>>q; cin.ignore(numeric_limits<streamsize>::max(),'\n'); while(q--){ string cmd; getline(cin,cmd); if(cmd=="ADD"){ string id,name; getline(cin,id); getline(cin,name); db.push_back({id,name}); }
        else if(cmd=="MODIFY"){ string id,newname; getline(cin,id); getline(cin,newname); for(auto &e:db) if(e.first==id){ e.second=newname; break; } }
        else if(cmd=="APPEND"){ string id,suf; getline(cin,id); getline(cin,suf); for(auto &e:db) if(e.first==id){ e.second += suf; break; } }
        else if(cmd=="DISPLAY"){ for(auto &e:db) cout<<e.first<<"|"<<e.second<<"\n"; }
    }
    saveDB(file, db); }

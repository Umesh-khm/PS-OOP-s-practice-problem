// Program: Enter Patient details using Inheritance
// Summary: Patient derives from Person; show simple input/output of details.

#include <bits/stdc++.h>
using namespace std;
struct Person{ string name; int age; };
struct Patient: Person{ string disease; };
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    Patient p; getline(cin,p.name); if(p.name.empty() && cin.good()) getline(cin,p.name); cin>>p.age; cin.ignore(numeric_limits<streamsize>::max(),'\n'); getline(cin,p.disease);
    cout<<p.name<<"\n"<<p.age<<"\n"<<p.disease; }

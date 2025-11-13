// Program: Student marksheet using multiple inheritance
// Summary: Student derives from Academic and Sports to compute total.

#include <bits/stdc++.h>
using namespace std;
struct Academic{ int theory{0}; };
struct Sports{ int sport{0}; };
struct Student: Academic, Sports{ string name; int total() const { return theory + sport; } };
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); Student s; getline(cin,s.name); if(s.name.empty()&&cin.good()) getline(cin,s.name); cin>>s.theory>>s.sport; cout<<s.name<<"\n"<<s.total(); }

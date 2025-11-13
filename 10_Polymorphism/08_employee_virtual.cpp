// Program: Maintain employee database using virtual class
// Summary: Polymorphic print() across different employee types.

#include <bits/stdc++.h>
using namespace std;
struct Employee{ string name; virtual ~Employee()=default; virtual string role() const =0; virtual void print() const { cout<<name<<" ("<<role()<<")"; } };
struct Engineer: Employee{ string role() const override { return "Engineer"; } };
struct Manager: Employee{ string role() const override { return "Manager"; } };
int main(){ Engineer e; e.name="Alice"; Manager m; m.name="Bob"; vector<Employee*> v = {&e,&m}; for(auto*p:v){ p->print(); cout<<"\n"; } }

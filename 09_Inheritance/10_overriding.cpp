// Program: Overriding member functions using Inheritance
// Summary: Show virtual function overridden in derived class and dynamic dispatch.

#include <bits/stdc++.h>
using namespace std;
struct Base{ virtual ~Base()=default; virtual string name() const { return "Base"; } };
struct Derived: Base{ string name() const override { return "Derived"; } };
int main(){ unique_ptr<Base> p = make_unique<Derived>(); cout<<p->name(); }

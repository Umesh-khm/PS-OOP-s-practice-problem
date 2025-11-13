// Program: Define an Abstract Class
// Summary: Interface IPrintable with pure virtual print(), implemented by classes.

#include <bits/stdc++.h>
using namespace std;
struct IPrintable{ virtual ~IPrintable()=default; virtual void print(ostream&) const =0; };
struct User: IPrintable{ string name; explicit User(string n):name(move(n)){} void print(ostream& os) const override { os<<"User:"<<name; } };
int main(){ unique_ptr<IPrintable> p = make_unique<User>("Alice"); p->print(cout); }

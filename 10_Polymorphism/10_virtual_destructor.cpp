// Program: Pure virtual and virtual destructors
// Summary: Show correct destructor dispatch via virtual destructor.

#include <bits/stdc++.h>
using namespace std;
struct Base{ virtual ~Base(){ cout<<"~Base\n"; } virtual void f()=0; };
struct Derived: Base{ ~Derived(){ cout<<"~Derived\n"; } void f() override { cout<<"Derived::f\n"; } };
int main(){ Base* p = new Derived(); p->f(); delete p; }

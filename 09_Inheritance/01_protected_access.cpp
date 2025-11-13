// Program: Access protected data member using Inheritance
// Summary: Demonstrate accessing a protected member in a derived class.

#include <bits/stdc++.h>
using namespace std;
class Base{ protected: int value; public: Base(int v):value(v){} };
class Derived: public Base{ public: Derived(int v):Base(v){} int getValueTimes2() const { return value*2; } };
int main(){ Derived d(21); cout<<d.getValueTimes2(); }

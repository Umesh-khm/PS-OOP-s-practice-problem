// Program: Multiple Inheritance demo
// Summary: Class C inherits from A and B and combines methods.

#include <bits/stdc++.h>
using namespace std;
struct A{ string a() const { return "A"; } };
struct B{ string b() const { return "B"; } };
struct C: A, B{ string ab() const { return a()+b(); } };
int main(){ C c; cout<<c.ab(); }

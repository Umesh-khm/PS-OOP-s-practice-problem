// Program: Run time polymorphism (again)
// Summary: Demonstrate overriding and calling through references.

#include <bits/stdc++.h>
using namespace std;
struct Base{ virtual ~Base()=default; virtual int v() const { return 1; } };
struct D1: Base{ int v() const override { return 2; } };
int main(){ D1 d; Base& b=d; cout<<b.v(); }

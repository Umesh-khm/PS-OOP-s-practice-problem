// Program: Inheritance beyond single level (multilevel)
// Summary: Base -> Mid -> Derived, show method chaining and access.

#include <bits/stdc++.h>
using namespace std;
struct Base{ int a{1}; };
struct Mid: Base{ int b{2}; };
struct Derived: Mid{ int c{3}; int sum() const { return a+b+c; } };
int main(){ Derived x; cout<<x.sum(); }

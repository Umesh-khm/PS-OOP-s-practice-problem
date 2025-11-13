// Program: Virtual base class (diamond problem)
// Summary: Use virtual inheritance to avoid duplicate Base subobjects.

#include <bits/stdc++.h>
using namespace std;
struct Base{ int x{1}; };
struct Left: virtual Base{ };
struct Right: virtual Base{ };
struct Derived: Left, Right{ int sum() const { return x + 1; } };
int main(){ Derived d; cout<<d.sum(); }

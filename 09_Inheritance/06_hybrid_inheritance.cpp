// Program: Hybrid Inheritance demo
// Summary: Multiple + multilevel combined.

#include <bits/stdc++.h>
using namespace std;
struct Base{ int base(){ return 1; } };
struct X: Base{ int x(){ return base()+1; } };
struct Y: Base{ int y(){ return base()+2; } };
struct Z: X, Y{ int z(){ return X::x() + Y::y(); } };
int main(){ Z z; cout<<z.z(); }

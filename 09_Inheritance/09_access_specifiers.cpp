// Program: Show access to private, public and protected using Inheritance
// Summary: Demonstrate that derived can access protected/public but not private.

#include <bits/stdc++.h>
using namespace std;
class Base{ private: int priv=1; protected: int prot=2; public: int pub=3; public: int getPriv() const { return priv; } };
class Derived: public Base{ public: int sum() const { return /*priv*/ 0 + prot + pub + getPriv(); } };
int main(){ Derived d; cout<<d.sum(); }

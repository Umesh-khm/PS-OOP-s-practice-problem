// Program: Single Inheritance demo
// Summary: Derived class inherits method from base and extends behavior.

#include <bits/stdc++.h>
using namespace std;
class Animal{ public: string speak() const { return "sound"; } };
class Dog: public Animal{ public: string speak() const { return "woof"; } };
int main(){ Dog d; cout<<d.speak(); }

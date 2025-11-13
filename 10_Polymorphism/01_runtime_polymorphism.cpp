// Program: Run time polymorphism
// Summary: Virtual function overridden in derived; base pointer calls derived implementation.

#include <bits/stdc++.h>
using namespace std;
struct Animal{ virtual ~Animal()=default; virtual string speak() const { return "..."; } };
struct Dog: Animal{ string speak() const override { return "woof"; } };
struct Cat: Animal{ string speak() const override { return "meow"; } };
int main(){ vector<unique_ptr<Animal>> v; v.emplace_back(make_unique<Dog>()); v.emplace_back(make_unique<Cat>()); for(auto &p: v) cout<<p->speak()<<"\n"; }

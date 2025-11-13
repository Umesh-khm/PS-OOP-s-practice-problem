// Program: Pointers to base class
// Summary: Store derived objects behind base pointers and invoke virtual methods.

#include <bits/stdc++.h>
using namespace std;
struct Vehicle{ virtual ~Vehicle()=default; virtual string type() const { return "vehicle"; } };
struct Car: Vehicle{ string type() const override { return "car"; } };
struct Bike: Vehicle{ string type() const override { return "bike"; } };
int main(){ vector<Vehicle*> v; Car c; Bike b; v.push_back(&c); v.push_back(&b); for(auto *p: v) cout<<p->type()<<"\n"; }

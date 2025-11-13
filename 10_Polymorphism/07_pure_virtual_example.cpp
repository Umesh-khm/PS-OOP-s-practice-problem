// Program: Pure Virtual functions (shapes)
// Summary: Another example with polymorphic area() and perimeter().

#include <bits/stdc++.h>
using namespace std;
struct Shape{ virtual ~Shape()=default; virtual double area() const=0; virtual double perim() const=0; };
struct Square: Shape{ double a; explicit Square(double a):a(a){} double area() const override { return a*a; } double perim() const override { return 4*a; } };
int main(){ Square s(5); cout<<fixed<<setprecision(2)<<s.area()<<"\n"<<s.perim(); }

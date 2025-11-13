// Program: Pure virtual function demo
// Summary: Abstract base with pure virtual area(); derived implement it.

#include <bits/stdc++.h>
using namespace std;
struct Shape{ virtual ~Shape()=default; virtual double area() const =0; };
struct Circle: Shape{ double r; explicit Circle(double r):r(r){} double area() const override { return 3.14159265358979323846*r*r; } };
struct Rect: Shape{ double w,h; Rect(double w,double h):w(w),h(h){} double area() const override { return w*h; } };
int main(){ Circle c(2.0); Rect r(3.0,4.0); cout<<fixed<<setprecision(2)<<c.area()<<"\n"<<r.area(); }

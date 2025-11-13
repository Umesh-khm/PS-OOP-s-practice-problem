// Program: Area of Rectangle using inheritance
// Summary: Rectangle derives from Shape and computes area.

#include <bits/stdc++.h>
using namespace std;
struct Shape{ virtual ~Shape()=default; };
struct Rectangle: Shape{ double w{0}, h{0}; double area() const { return w*h; } };
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); Rectangle r; cin>>r.w>>r.h; cout<<fixed<<setprecision(2)<<r.area(); }

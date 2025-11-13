// Program: Abstract Base Class
// Summary: Abstract Logger with pure virtual log(); FileLogger implements it.

#include <bits/stdc++.h>
using namespace std;
struct Logger{ virtual ~Logger()=default; virtual void log(const string&)=0; };
struct ConsoleLogger: Logger{ void log(const string& s) override { cout<<s; } };
int main(){ unique_ptr<Logger> lg = make_unique<ConsoleLogger>(); lg->log("Hello"); }

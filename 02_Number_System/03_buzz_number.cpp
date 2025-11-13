// Problem: Buzz Number
// Summary: A number is Buzz if divisible by 7 or ends with 7.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; if(!(cin>>n)) return 0;
    long long a = (n<0)?-n:n;
    bool ok = (n%7==0) || (a%10==7);
    cout<<(ok?"YES":"NO");
    return 0; }

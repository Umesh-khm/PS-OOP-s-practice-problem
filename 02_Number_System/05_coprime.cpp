// Problem: Co-Prime Numbers
// Summary: Given two integers A and B, print YES if gcd(A,B)==1 else NO.

#include <iostream>
using namespace std;

static long long igcd(long long a, long long b){
    if(a<0) a=-a; if(b<0) b=-b;
    while(b!=0){ long long r=a%b; a=b; b=r; }
    return a;
}

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long A,B; if(!(cin>>A>>B)) return 0;
    cout<<((igcd(A,B)==1)?"YES":"NO");
    return 0; }

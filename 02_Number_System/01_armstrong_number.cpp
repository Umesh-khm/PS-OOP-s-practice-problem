// Problem: Armstrong Number
// Summary: Given an integer n, check if it equals the sum of its digits
// each raised to the power of the number of digits. Print YES or NO.

// iostream-only solution without STL/string/cmath
#include <iostream>
using namespace std;

static long long ipow(int base, int exp){
    long long res = 1;
    for(int i=0;i<exp;++i) res *= base;
    return res;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; if(!(cin>>n)) return 0; if(n<0){ cout<<"NO"; return 0; }
    if(n==0){ cout<<"YES"; return 0; } // 0 has 1 digit and 0^1 == 0
    long long t = n; int d = 0;
    while(t>0){ ++d; t/=10; }
    long long sum = 0; t = n;
    while(t>0){ int digit = int(t%10); t/=10; sum += ipow(digit, d); if(sum>n && digit>1){} }
    cout << (sum==n?"YES":"NO");
    return 0;
}

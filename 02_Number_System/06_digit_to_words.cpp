// Problem: Digit to Word
// Summary: Given an integer, print the English word for each digit
// separated by spaces (e.g., 204 -> "Two Zero Four").

#include <iostream>
using namespace std;

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; if(!(cin>>n)) return 0;
    static const char* W[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n<0){ cout<<"Minus "; n = -n; }
    if(n==0){ cout<<W[0]; return 0; }
    long long t = n; long long pow10 = 1; while(t>=10){ pow10*=10; t/=10; }
    bool first = true;
    while(pow10>0){ int d = int((n / pow10) % 10); if(!first) cout<<' '; cout<<W[d]; first=false; pow10/=10; }
    return 0; }

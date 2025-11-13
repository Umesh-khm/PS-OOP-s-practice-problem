// Problem: Factorial of a Number
// Summary: Given n, output n! as a decimal using manual big integer array.

#include <iostream>
using namespace std;

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<0){ cout<<0; return 0; }
    const int CAP = 50000; // capacity for digits
    int *d = new int[CAP]; int len = 1; d[0]=1; // least significant first
    for(int x=2;x<=n;++x){
        int carry=0; for(int i=0;i<len;++i){ long long v=1LL*d[i]*x+carry; d[i]=int(v%10); carry=int(v/10);} while(carry){ if(len<CAP){ d[len++] = carry%10; carry/=10; } else { carry/=10; } }
    }
    for(int i=len-1;i>=0;--i) cout<<d[i];
    delete[] d;
    return 0; }

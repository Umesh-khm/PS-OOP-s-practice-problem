// Problem: Circular Prime
// Summary: A number is circular prime if it is prime and all digit-rotations are prime.

#include <iostream>
using namespace std;

bool isPrime(long long x){
    if(x<2) return false; if(x%2==0) return x==2; if(x%3==0) return x==3;
    for(long long i=5;i*i<=x;i+=6){ if(x%i==0 || x%(i+2)==0) return false; }
    return true;
}

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; if(!(cin>>n)) return 0; if(n<0){ cout<<"NO"; return 0; }
    // count digits and pow10
    long long x = n;
    int L = 1; long long pow10 = 1; while(x>=10){ pow10*=10; x/=10; ++L; }
    bool ok = true; x = n;
    for(int i=0;i<L;i++){
        if(!isPrime(x)){ ok=false; break; }
        long long lead = x / pow10; // most significant digit
        long long rest = x % pow10;
        x = rest*10 + lead; // left-rotation
    }
    cout<<(ok?"YES":"NO");
    return 0; }

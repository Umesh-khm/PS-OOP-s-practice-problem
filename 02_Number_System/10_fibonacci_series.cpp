// Problem: Fibonacci Series
// Summary: Given integer N, print the first N Fibonacci numbers (starting 0 1 ...).

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long N; if(!(cin>>N)) return 0; if(N<=0) return 0;
    unsigned long long a=0,b=1;
    for(long long i=0;i<N;++i){
        if(i==0) cout<<a;
        else if(i==1) cout<<" "<<b;
        else { unsigned long long c=a+b; cout<<" "<<c; a=b; b=c; }
    }
    return 0; }

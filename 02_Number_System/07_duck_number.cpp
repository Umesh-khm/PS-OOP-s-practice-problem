// Problem: Duck Number
// Summary: A Duck number contains at least one '0' not at the first position.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; if(!(cin>>n)) return 0;
    long long m = (n<0)?-n:n;
    if(m==0){ cout<<"NO"; return 0; }
    bool ok=false; while(m>0){ int d=int(m%10); if(d==0){ ok=true; break; } m/=10; }
    cout<<(ok?"YES":"NO");
    return 0; }

// Problem: Automorphic Number
// Summary: A number n is automorphic if n^2 ends with digits of n.
// iostream-only solution without strings or STL.

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    unsigned long long n; if(!(cin>>n)) return 0;
    unsigned long long m = n;
    int k = 1; // number of digits in n
    unsigned long long t = m / 10;
    while(t>0){ ++k; t/=10; }
    unsigned long long mod = 1;
    for(int i=0;i<k;++i) mod *= 10ULL;
    unsigned __int128 sq = (unsigned __int128)n;
    sq *= sq;
    unsigned long long tail = (unsigned long long)(sq % (unsigned __int128)mod);
    cout << (tail == (m % mod) ? "YES" : "NO");
    return 0;
}

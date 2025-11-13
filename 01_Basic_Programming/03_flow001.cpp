// Problem: Add Two Numbers (CodeChef FLOW001)
// Summary: For T test cases, read A and B; print A+B.
// Link: https://www.codechef.com/problems/FLOW001

#include <iostream>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T; if(!(std::cin>>T)) return 0; 
    while(T--){ long long A,B; std::cin>>A>>B; std::cout<<(A+B)<<"\n"; }
    return 0; }

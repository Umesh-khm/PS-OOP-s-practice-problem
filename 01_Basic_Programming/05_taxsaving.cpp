// Problem: Tax Saving (CodeChef TAXSAVING)
// Summary: Given T test cases with X>Y, minimum investment so that taxable income <= Y is X-Y.
// Print X-Y for each case.
// Link: https://www.codechef.com/problems/TAXSAVING

#include <iostream>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int T; if(!(std::cin>>T)) return 0; 
    while(T--){ long long X,Y; std::cin>>X>>Y; std::cout<<(X-Y)<<"\n"; }
    return 0; }

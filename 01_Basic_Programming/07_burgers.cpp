// Problem: Burgers (CodeChef BURGERS)
// Summary: Max burgers = min(A, B).
// Link: https://www.codechef.com/problems/BURGERS

#include <iostream>
using namespace std;
int main(){ std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int T; if(!(std::cin>>T)) return 0; while(T--){ long long A,B; std::cin>>A>>B; std::cout<<std::min(A,B)<<"\n"; } return 0; }

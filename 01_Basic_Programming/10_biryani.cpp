// Problem: Biryani Classes (CodeChef BIRYANI)
// Summary: Total cost = X * Y.
// Link: https://www.codechef.com/problems/BIRYANI

#include <iostream>
using namespace std;
int main(){ std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int T; if(!(std::cin>>T)) return 0; while(T--){ long long X,Y; std::cin>>X>>Y; std::cout<<(X*Y)<<"\n"; } return 0; }

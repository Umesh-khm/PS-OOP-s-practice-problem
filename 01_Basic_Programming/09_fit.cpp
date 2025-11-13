// Problem: Fitness (CodeChef FIT)
// Summary: Weekly distance walking to and from office: 10 * X.
// Link: https://www.codechef.com/problems/FIT

#include <iostream>
using namespace std;
int main(){ std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int T; if(!(std::cin>>T)) return 0; while(T--){ long long X; std::cin>>X; std::cout<<(10*X)<<"\n"; } return 0; }

// Problem: Practice Page Un-attempted (CodeChef PRACLIST)
// Summary: Given X (total) and Y (attempted), print X - Y.
// Link: https://www.codechef.com/problems/PRACLIST

#include <iostream>
using namespace std;
int main(){ std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int T; if(!(std::cin>>T)) return 0; while(T--){ long long X,Y; std::cin>>X>>Y; std::cout<<(X-Y)<<"\n"; } return 0; }

// Problem: Ludo (CodeChef LUDO)
// Summary: Print YES if X == 6 else NO.
// Link: https://www.codechef.com/problems/LUDO

#include <iostream>
using namespace std;
int main(){ std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int T; if(!(std::cin>>T)) return 0; while(T--){ int X; std::cin>>X; std::cout<<(X==6?"YES":"NO")<<"\n"; } return 0; }

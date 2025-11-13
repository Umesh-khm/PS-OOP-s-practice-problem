// Problem: Good Turn (CodeChef GDTURN)
// Summary: For each test case, given X and Y (dice values),
// print "YES" if X + Y > 6, otherwise print "NO".
// Link: https://www.codechef.com/problems/GDTURN

#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; if(!(cin>>T)) return 0; 
    while(T--){
        int X,Y; cin>>X>>Y; 
        cout<<((X+Y>6)?"YES":"NO")<<"\n";
    }
    return 0;
}

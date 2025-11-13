// Problem: Exam Eligibility
// Summary: For T cases, given X (min age), Y (upper bound, exclusive), A (current age),
// print "YES" if X <= A < Y, else "NO".
// Link: https://www.codechef.com/learn/course/cpp-beginner/BC00BC09/problems/CSC02A

#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; if(!(cin>>T)) return 0; 
    while(T--){ int X,Y,A; cin>>X>>Y>>A; cout<<((A>=X && A<Y)?"YES":"NO")<<"\n"; }
    return 0; }

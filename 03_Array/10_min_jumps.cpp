// Problem: Minimum number of jumps to reach end
// Summary: Greedy O(n) for non-negative array where 0 blocks.

#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0; if(n<=0){ cout<<-1; return 0; }
    long long* a = new long long[n];
    for(int i=0;i<n;++i) cin>>a[i];
    if(n<=1){ cout<<0; if(a) delete[] a; return 0; }
    if(a[0]==0){ cout<<-1; if(a) delete[] a; return 0; }
    long long maxReach = a[0];
    long long step = a[0];
    long long jumps = 1;
    for(int i=1;i<n;i++){
        if(i==n-1){ cout<<jumps; if(a) delete[] a; return 0; }
        long long cand = i + a[i];
        maxReach = (maxReach > cand ? maxReach : cand);
        step--;
        if(step==0){
            jumps++;
            if(i>=maxReach){ cout<<-1; if(a) delete[] a; return 0; }
            step = maxReach - i;
        }
    }
    cout<<-1; if(a) delete[] a; return 0; }

// Problem: Find four elements that sum to a given value (4-sum)
// Summary: Print one quadruple (a,b,c,d) in non-decreasing order if exists, else NO.

#include <bits/stdc++.h>
using namespace std; 
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;++i) cin>>a[i]; long long target; cin>>target; sort(a.begin(), a.end());
    for(int i=0;i<n;i++){ if(i && a[i]==a[i-1]) continue; for(int j=i+1;j<n;j++){ if(j>i+1 && a[j]==a[j-1]) continue; long long t = target - a[i] - a[j]; int l=j+1, r=n-1; while(l<r){ long long s=a[l]+a[r]; if(s==t){ cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]; return 0; } else if(s<t) ++l; else --r; } } }
    cout<<"NO"; return 0; }

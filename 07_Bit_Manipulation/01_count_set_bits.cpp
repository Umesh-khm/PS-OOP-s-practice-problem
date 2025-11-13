// Problem: Count set bits in an integer
// Summary: Given N, print number of set bits (popcount).

#include <bits/stdc++.h>
using namespace std; 
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    unsigned long long N; if(!(cin>>N)) return 0; 
    int cnt=0; while(N){ N &= (N-1); ++cnt; } cout<<cnt; return 0; }
/*
Problem: You are given a number N. Find the total count of set bits for all 
numbers from 1 to N (both inclusive).
Set bit means a bit that is 1 in the binary representation.
*/

#include <iostream>
using namespace std;

// Function to count set bits in a single number
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);  // Check if last bit is 1
        n >>= 1;           // Right shift by 1
    }
    return count;
}

// Function to count total set bits from 1 to N
int countTotalSetBits(int N) {
    int totalCount = 0;
    
    for (int i = 1; i <= N; i++) {
        totalCount += countSetBits(i);
    }
    
    return totalCount;
}

// Display binary representation
void displayBinary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }
    
    int bits[32];
    int i = 0;
    
    while (n > 0) {
        bits[i++] = n % 2;
        n /= 2;
    }
    
    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << bits[j];
    }
}

int main() {
    int N;
    
    cout << "Enter a number N: ";
    cin >> N;
    
    int total = countTotalSetBits(N);
    
    cout << "\nTotal count of set bits from 1 to " << N << ": " << total << endl;
    
    // Show breakdown for small N
    if (N <= 20) {
        cout << "\nBreakdown:\n";
        for (int i = 1; i <= N; i++) {
            cout << i << " (";
            displayBinary(i);
            cout << ") -> " << countSetBits(i) << " set bit(s)" << endl;
        }
    }
    
    return 0;
}

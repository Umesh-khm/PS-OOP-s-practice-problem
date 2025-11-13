// Problem: Count elements in union of two arrays
// Summary: Given sizes n and m and arrays (not necessarily sorted),
// output the number of distinct elements in their union.

#include <iostream>
using namespace std;

static void swapll(long long &a, long long &b){ long long t=a; a=b; b=t; }

static int partition_ll(long long arr[], int low, int high){
    long long pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; ++j){
        if(arr[j] <= pivot){
            ++i; swapll(arr[i], arr[j]);
        }
    }
    swapll(arr[i+1], arr[high]);
    return i + 1;
}

static void quicksort_ll(long long arr[], int low, int high){
    if(low < high){
        int pi = partition_ll(arr, low, high);
        quicksort_ll(arr, low, pi - 1);
        quicksort_ll(arr, pi + 1, high);
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; if(!(cin >> n >> m)) return 0;
    int total = n + m;
    if(total <= 0){ cout << 0; return 0; }
    long long* a = new long long[total];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int j = 0; j < m; ++j) cin >> a[n + j];
    quicksort_ll(a, 0, total - 1);
    int distinct = 0;
    for(int i = 0; i < total; ++i){
        if(i == 0 || a[i] != a[i-1]) ++distinct;
    }
    cout << distinct;
    delete[] a;
    return 0;
}

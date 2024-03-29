#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------------------
// Nth ROOT OF A NUMBER USING BINARY SEARCH

// Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M. If the ‘nth root is not an integer, return -1.

int func(int mid, int n, int m) {
    // we are passing m because if there is a bigger number and value of n is also bigger. Then there will be overflow of memory cause finding nth power of that number will be very large. Thats why we will stop the moment it crosses the HIGH (i.e. m) value.
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
    //return 1, if == m:
    //return 0, if < m:
    //return 2, if > m:
}

int NthRoot(int n, int m) {
    //Use Binary search on the answer space:
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1) {
            return mid;
        }
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

// ---------------------------------------------------------------------



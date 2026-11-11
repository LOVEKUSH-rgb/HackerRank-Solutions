// Problem: 1 to n Without Loop
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
// Solved on: 2026-11-11T10:20:38.148Z

class Solution {
  public:
    void printTillN(int n) {
        if (n < 1)
                return;
            n--;
            printTillN(n);
            cout << n + 1 << " ";
        
    }
};
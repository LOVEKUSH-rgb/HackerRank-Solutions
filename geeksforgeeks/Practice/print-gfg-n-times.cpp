// Problem: Print GFG n times
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/print-gfg-n-times/1
// Solved on: 2026-11-11T10:54:41.293Z

class Solution {
  public:
    void printGfg(int n) {
        // code here
        if (n == 0)
            {
                return;
            }
            printGfg(n - 1);
            cout << "GFG" << " ";
    }
};
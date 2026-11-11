// Problem: Print n to 1 Without Loop
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1
// Solved on: 2026-11-11T10:57:02.954Z

class Solution {
  public:
    void printNos(int n) {
        if(n==0)return;
        cout<<n<<" ";
        printNos(n-1);
        
    }
};
// Problem: Sum of Natural Number Cubes
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
// Solved on: 2026-11-11T11:07:14.463Z

class Solution {
  public:
    int sumOfSeries(int n) {
        int a = 0;
            while (n > 0)
            {

                a = a + n * n * n;
                n = n - 1;

                
            }
            return a;
            
        
    }
};
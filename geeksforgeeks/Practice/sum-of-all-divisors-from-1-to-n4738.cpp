// Problem: BEST HINT FOR DIY || IDEA ONLY O(N)
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
// Solved on: 2026-11-10T21:40:35.104Z

class Solution {
  public:
    long long sumOfDivisors(long long n) {
     int b = 0;
         for (int i = 1; i <= n; i++)
         {
             int c = 0;
             for (int j = 1; j <= i; j++)
             {
                 if (i % j == 0)
                 {
                     c += j;
                     
                 }
             }
             b += c;
         }
         return b;
        
    }
};
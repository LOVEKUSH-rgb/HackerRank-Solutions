// Problem: Armstrong Numbers
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
// Solved on: 2026-11-10T18:13:14.275Z

class Solution {
  public:
    bool armstrongNumber(int n) {
        int c = n;
            int b = 0;
            while (n != 0)
            {
                int remainder = n % 10;
                n = n / 10;
                b = b + remainder * remainder * remainder;

            }
            return b==c;
        
    }
};
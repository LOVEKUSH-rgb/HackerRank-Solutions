// Problem: Reverse Integer
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/reverse-integer/
// Solved on: 2026-11-09T10:37:16.279Z

class Solution {
public:
    int reverse(int x) {
          int a = 0;

    while (x != 0)
    {
        int remainder = x % 10;
        x = x / 10;

        
        if (a > INT_MAX / 10 ||
            (a == INT_MAX / 10 && remainder > 7))
            return 0;

        
        if (a < INT_MIN / 10 ||
            (a == INT_MIN / 10 && remainder < -8))
            return 0;

        a = a * 10 + remainder;
    }
    return a;
    }
};
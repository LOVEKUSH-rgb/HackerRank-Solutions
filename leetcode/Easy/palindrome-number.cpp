// Problem: Palindrome Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-11-09T18:38:16.088Z

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
    {
        return false;
    }
    int a = x;
    long long n = 0;

    while (x != 0)
    {
        int remainder = x % 10;
        x = x / 10;
        n = n * 10 + remainder;
    }
    return n == a;
    }
};
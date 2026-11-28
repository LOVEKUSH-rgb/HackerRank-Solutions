// Problem: Richest Customer Wealth
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/richest-customer-wealth/
// Solved on: 2026-11-28T15:49:06.103Z

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum=0, sum=0;
        for(int i=0;i<accounts.size();i++)
       {
        sum=0;
        for(int j=0;j<accounts[0].size();j++)
        {
          sum+=accounts[i][j];
        }
        maximum=max(maximum,sum);
       }
       return maximum;
    }
};
// Problem: Matrix Diagonal Sum
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/matrix-diagonal-sum/
// Solved on: 2026-11-28T16:27:55.481Z

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
           
               sum+=mat[i][i];
               sum+=mat[i][mat.size()-i-1];
            
        }
        if(mat.size()%2==1)
        {
            sum-=mat[mat.size()/2][mat.size()/2];
        }
        return sum;
    }
};
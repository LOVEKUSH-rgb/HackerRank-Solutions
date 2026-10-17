// Problem: Two Sum
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/two-sum/
// Solved on: 2026-10-17T16:12:34.946Z

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); 
        
        for (int i = 0; i < n; i++) {
            
            for (int j = i + 1; j < n; j++) { 
                if (nums[i] + nums[j] == target) {
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }
};

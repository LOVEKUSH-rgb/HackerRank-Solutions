// Problem: 
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
// Solved on: 2026-11-22T17:24:54.972Z

class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        vector<int> hash(arr.size(), 0);
               for (int i = 0; i < arr.size(); i++)
               {
                   hash[arr[i] - 1]++;
               }
              
               return hash;
        
    }
};

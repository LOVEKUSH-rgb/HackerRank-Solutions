// Problem: Selection Sort
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/selection-sort/1
// Solved on: 2026-11-23T14:58:41.151Z

class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int temp;
        for(int i =0;i<arr.size()-1;i++)
        {
            int min=i;
            for(int j =i;j<arr.size();j++)
            {
                if(arr[j]<arr[min])
                {
                    min = j;
                }
            }
           temp= arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        
    }
};
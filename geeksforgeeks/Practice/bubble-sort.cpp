// Problem: Bubble Sort
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/bubble-sort/1
// Solved on: 2026-11-23T17:27:21.691Z

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code 
        int temp;
        for(int i =arr.size()-1;i>=0;i--)
        {
            int d = 0;
            for(int j=0;j<=i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    d=1;
                }
            }
            if(d==0)
            {
                break;
            }
            
        }
    }
};
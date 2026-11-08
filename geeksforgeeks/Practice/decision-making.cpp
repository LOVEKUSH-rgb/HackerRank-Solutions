// Problem: Decision Making
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/decision-making/1
// Solved on: 2026-11-08T15:50:22.780Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

  if(n>m)
  {
      cout<<"greater";
  }
  else if(n<m)
  {
      cout<<"less";
  }
  else
  {
      cout<<"equal";
  }
    

    return 0;
}
// Problem: Variable Sized Arrays
// Platform: hackerrank
// Language: cpp14
// Verdict: Accepted
// URL: https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
// Solved on: 2026-08-27T05:58:16.293Z

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, k, i, j;
    cin >> n;
    cin >> q;
    vector<vector<int>> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> k;
        a[i].resize(k);
        for (j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < q; i++)
    {
        int x,y;
        cin >> x;
        cin >> y;
        cout << a[x][y]<<endl;
    }
    return 0;
}

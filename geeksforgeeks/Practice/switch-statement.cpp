// Problem: Switch Statement
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/switch-statement/1
// Solved on: 2026-11-08T15:59:19.950Z

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch(n){
        case 1:
        cout<<"Stop";
        break;
        case 2:
        cout<<"Standby";
        break;
        case 3:
        cout <<"Go";
        break;
        default:
        cout<<"Unknown";
        break;
    }

    return 0;
}
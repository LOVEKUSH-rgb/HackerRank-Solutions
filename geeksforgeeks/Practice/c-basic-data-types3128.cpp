// Problem: Type of String
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/c-basic-data-types3128/1
// Solved on: 2026-11-08T15:13:49.353Z

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
  public:
    int basicDataType(string s) {
        bool hasDecimal = false;
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') {
                hasDecimal = true;
            }
            if (hasDecimal && s[i] != '.') {
                count++;
            }
        }

        if (s.length() == 1 && !isdigit(s[0])) {
            return sizeof(char);
        }
        else if (!hasDecimal) {
            return sizeof(int);
        }
        else if (count > 5) {
            return sizeof(double);
        }
        else {
            return sizeof(float);
        }
    }
};

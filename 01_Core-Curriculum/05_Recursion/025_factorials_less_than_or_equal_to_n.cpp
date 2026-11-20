/*
 * Problem: Factorials Less than or Equal to n
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/1
 * Approach: Used a recursive helper function to generate factorials. It takes the current number, its factorial, and the limit n, pushing factorials into the vector until the limit is exceeded.
 * Time Complexity: O(number of factorial terms) | Space Complexity: O(number of factorial terms)
 */

class Solution {
public:
    void getFactorials(long long current, long long fact, long long n, vector<long long>& ans) {
        if (fact > n) {
            return;
        }
        ans.push_back(fact);
        getFactorials(current + 1, fact * (current + 1), n, ans);
    }

    vector<long long> factorialNumbers(long long n) {
        vector<long long> ans;
        getFactorials(1, 1, n, ans);
        return ans;
    }
};

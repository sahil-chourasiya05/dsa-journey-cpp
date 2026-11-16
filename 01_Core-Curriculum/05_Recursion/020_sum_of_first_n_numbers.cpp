/*
 * Problem: 932. Sum of First N Numbers
 * Platform: TakeUforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/sum-of-first-n-numbers
 * Approach: Used recursion with base case N==1, returning N + sum(N-1) for the recursive step.
 * Time Complexity: O(N) | Space Complexity: O(N)
 */

class Solution {
   public:
    int NnumbersSum(int N) {
        if (N == 1) {
            return 1;
        }

        return N+NnumbersSum(N-1);
    }
};
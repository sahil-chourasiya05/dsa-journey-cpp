/*
 * Problem: 921. Factorial of a Given Number
 * Platform: TakeUforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/factorial-of-a-given-number-ii
 * Approach: Used recursion with base case n==0 or n==1, returning n * factorial(n-1) for the recursive step.
 * Time Complexity: O(N) | Space Complexity: O(N)
 */

class Solution {
   public:
    long long int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        return n * factorial(n - 1);
    }
};
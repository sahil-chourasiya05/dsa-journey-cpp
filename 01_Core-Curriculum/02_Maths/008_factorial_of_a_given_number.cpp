/*
 * Problem: 908. Factorial of a given number
 * Platform: TakeUforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/factorial-of-a-given-number-i
 * Approach: Used a loop to calculate the factorial of the given number.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
   public:
    int factorial(int n) {
        int fact = 1;

        if (n == 0 || n == 1) {
            return fact;
        }

        for (int i = n; i >0;i--) {
            if (n == 1) {
                return fact;
            }
            fact = fact*i;
        }

        return fact;
    }
};

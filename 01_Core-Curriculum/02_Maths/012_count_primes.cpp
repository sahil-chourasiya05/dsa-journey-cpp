/*
 * Problem: #204 Count Primes
 * Platform: LeetCode
 * Link: https://leetcode.com/problems/count-primes/
 * Approach: Used Sieve of Eratosthenes to find all prime numbers strictly less than n efficiently.
 * Time Complexity: O(n log(log n)) | Space Complexity: O(n)
 */

class Solution {
public:
    int countPrimes(int n) {
        if (n < 2)
            return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i])
                count++;
        }
        return count;
    }
};
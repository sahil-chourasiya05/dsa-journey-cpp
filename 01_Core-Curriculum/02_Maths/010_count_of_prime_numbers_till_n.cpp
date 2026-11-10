/*
 * Problem: 790. Count of Prime Numbers till N
 * Platform: TakeUforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/count-of-prime-numbers-till-n
 * Approach: Used Sieve of Eratosthenes to find all prime numbers up to N efficiently.
 * Time Complexity: O(N log(log N)) | Space Complexity: O(N)
 */

class Solution {
   public:
    int primeUptoN(int n) {
        if (n < 2) return 0;

        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) count++;
        }
        return count;
    }
};
/*
 * Problem: Sum 1 to n Divisors
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
 * Approach: For each divisor i from 1 to n, it contributes i * (n/i) to the total sum, because i divides exactly (n/i) numbers in the range 1 to n.
 * Time Complexity: O(n) | Space Complexity: O(1)
 */

class Solution {
	public:
	long long sumOfDivisors(long long n) {
		long long sum = 0;
		for (long long i = 1; i <= n; i++) {
			sum += i * (n / i);
		}
		return sum;
	}
};

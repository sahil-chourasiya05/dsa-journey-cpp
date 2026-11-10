/*
 * Problem: LCM And GCD
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
 * Approach: Used Euclidean algorithm with modulo to find GCD, then calculated LCM using (a/gcd)*b to prevent overflow.
 * Time Complexity: O(log(min(a, b))) | Space Complexity: O(1)
 */

class Solution {
	public:
	vector<int> lcmAndGcd(int a, int b) {
		
		int original_a = a;
		int original_b = b;
		int gcd, temp;
		
		while (b != 0) {
			temp = b;
			b = a%b;
			a = temp;
		}
		
		gcd = a;
		
		long long lcm = (long long)(original_a / gcd) * original_b;
		
		return { (int)lcm, gcd };
		
	}
};

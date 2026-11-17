/*
 * Problem: 1 to n Without Loop
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
 * Approach: Used head recursion, calling the function with n-1 before printing n to get the output in increasing order.
 * Time Complexity: O(N) | Space Complexity: O(N)
 */

class Solution {
	public:
	void printTillN(int n) {
		
		if (n < 1) {
			return;
		}
		
		printTillN(n - 1);
		
		cout << n;
		cout << " ";
		
	}
};

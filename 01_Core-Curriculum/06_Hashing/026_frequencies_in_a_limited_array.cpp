/*
 * Problem: Frequencies in a Limited Array
 * Platform: GeeksforGeeks (GFG)
 * Link: https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
 * Approach: Used a hash array of size N to count the frequency of each element. Since elements are in range 1 to N, used arr[i]-1 as the index.
 * Time Complexity: O(N) | Space Complexity: O(N)
 */

class Solution {
	public:
	vector<int> frequencyCount(vector<int>& arr) {
		
		vector<int> hashed(arr.size(), 0);
		
		for (int i = 0 ; i<arr.size(); i++) {
			hashed[arr[i]-1]++;
		}
		
		return hashed;
		
	}
};

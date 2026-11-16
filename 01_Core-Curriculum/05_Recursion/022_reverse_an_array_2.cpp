/*
 * Problem: 821. Reverse an array 2
 * Platform: Takeuforward (TUF)
 * Link: https://takeuforward.org/practice/dsa/reverse-an-array-ii
 * Approach: Used a recursive helper function with two pointers (left and right), swapping elements and calling itself with updated indices until they meet.
 * Time Complexity: O(n) | Space Complexity: O(n) (due to recursion stack)
 */

class Solution {
   public:
    void reverseRec(vector<int>& nums, int left, int right) {
        if (left >= right) {
            return;
        }
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;

        left++;
        right--;

        reverseRec(nums, left, right);
    }
    vector<int> reverseArray(vector<int>& nums) {
        reverseRec(nums, 0, nums.size() - 1);
        return nums;
    }
};
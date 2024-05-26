class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1; // Initialize j to -1, it will keep track of the position where the next non-zero element should be moved
        int n = nums.size();

        // Find the first zero in the array
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero is found, return
        if (j == -1) return;

        // Iterate through the array starting from j+1
        for (int i = j + 1; i < n; i++) {
            // If the current element is non-zero, move it to the position pointed by j
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++; // Increment j after swapping
            }
        }
    }
};

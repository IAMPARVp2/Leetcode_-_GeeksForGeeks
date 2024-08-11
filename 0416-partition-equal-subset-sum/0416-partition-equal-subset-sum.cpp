class Solution {
public:
    bool checkPartitionSum(vector<int>& nums, int index, int target, vector<vector<int>>& dp) {
        int n = nums.size();
        if (target == 0) {
            return true;  // We found a subset with the desired sum
        }
        if (index >= n || target < 0) {
            return false;  // We are out of bounds or the target is negative
        }
        if (dp[index][target] != -1) {
            return dp[index][target];  // Return the stored result
        }

        // Include the current number and move to the next index
        bool include = checkPartitionSum(nums, index + 1, target - nums[index], dp);
        // Exclude the current number and move to the next index
        bool exclude = checkPartitionSum(nums, index + 1, target, dp);

        // Store the result in the dp array
        dp[index][target] = (include || exclude);
        return dp[index][target];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        // If the total sum is odd, we can't partition it into two equal subsets
        if (sum % 2 != 0) {
            return false;
        }

        int target = sum / 2;
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -1));

        // Start checking from the first index and the target sum
        return checkPartitionSum(nums, 0, target, dp);
    }
};

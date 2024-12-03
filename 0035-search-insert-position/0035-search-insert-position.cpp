// class Solution {
// public:

//     int binarySearch(vector<int>& nums, int s, int e, int target){
//           int ans =0;
//         while(s<=e){
//             int n =nums.size();
          
//             int mid =s+(e-s)/2;
//             if(n==1 && nums[0]<target){
//                 return 1;
//             }
            
//             if(nums[1]>target && nums[0]<target){
//                 return 1;
//             }
//             if(nums[n-1]<target){
//                 return n;
//             }
            
//             if(nums[mid]<= target){
//                 ans=mid;

//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }

//         }
//         return ans;
//     }
//     int searchInsert(vector<int>& nums, int target) {
//         int s = 1;
//         int e = nums.size()-1;
//         int ans = binarySearch(nums, s, e, target);
//         return ans;
//     }
// };

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1; // Start and end of the array
        
        while (s <= e) {
            int mid = s + (e - s) / 2; // Prevent potential overflow
            
            if (nums[mid] == target) {
                return mid; // Target found
            } else if (nums[mid] < target) {
                s = mid + 1; // Move to the right half
            } else {
                e = mid - 1; // Move to the left half
            }
        }
        
        // `s` will point to the insertion position
        return s;
    }
};

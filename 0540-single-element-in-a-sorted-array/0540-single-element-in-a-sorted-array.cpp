class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end){

        int mid = start + (end - start)/2;
        if(nums.size()==1){return nums[0];}
        if(nums[0]!=nums[1]){return nums[0];}
        if(nums[nums.size()-1]!=nums[nums.size()-2]){return nums[nums.size()-1];}
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        binarySearch(nums, start, mid-1);
        binarySearch(nums, mid+1,end);

        return -1;
    }


    int singleNonDuplicate(vector<int>& nums) {
        int start =1;
        int end =nums.size()-2;
        
        int ans = binarySearch(nums, start, end);
        return ans;
        
    }
};
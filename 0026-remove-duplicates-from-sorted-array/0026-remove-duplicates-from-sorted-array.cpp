class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int m=0;
        int j=nums.size();

        while (m<j){
            if(nums[i]!=nums[m]){
                swap(nums[++i],nums[m++]);
                
            }
            else m++;
        }
        return ++i;
    }
};
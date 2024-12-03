class Solution {
public:

    int lastPos(vector<int>& nums, int s, int e, int target){
        
        int res =-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(nums[mid]==target){
                res =mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            } 
        }
        return res;

    }

    int firstPos(vector<int>& nums, int s, int e, int target){
        
        int res =-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(nums[mid]==target){
                res =mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            } 
        }
        return res;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int ans1 = firstPos(nums, s, e, target );
        int ans2 = lastPos(nums, s, e, target );

        vector<int>v;

        v.push_back(ans1 == -1? -1: ans1);
        v.push_back(ans2 == -1? -1: ans2);
        return v;
        
    }
};
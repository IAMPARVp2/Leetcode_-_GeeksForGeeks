class Solution {
public:


    int solveByHash(vector<int>& nums,int n){
         vector<int>hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==0){return i;}
        }
        return 0 ;
    }
        

    
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans =solveByHash(nums, n);
        return ans;
       
    }
};
class Solution {
public:

    void findSubset(vector<int>& nums, set<vector<int>>& sv,  vector<int>& current, int i, int n){
        if(i==n){
            sv.insert(current);
            return;
        }
        findSubset(nums,sv,current,i+1,n);

        current.push_back(nums[i]);
        findSubset(nums,sv,current, i+1,n);
        current.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>sv;
        vector<int>current;
        int i=0;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        findSubset(nums,sv,current ,i,n);

        vector<vector<int>>ans(sv.begin(),sv.end());
        return ans;

       
    }
};
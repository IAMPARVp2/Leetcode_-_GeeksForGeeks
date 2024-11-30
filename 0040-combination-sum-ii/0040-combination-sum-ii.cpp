class Solution {
public:
    void solve(vector<vector<int>>& ans,  vector<int>& v, int index, vector<int>& candidates, int target ){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i=index; i < candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1])
            continue;
            v.push_back(candidates[i]);
            solve(ans, v, i+1, candidates, target-candidates[i]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int index =0;
        sort(candidates.begin(),candidates.end());
        solve(ans, v ,index, candidates, target);
        return ans;
    }
};


    

class Solution {
public:

    bool isPalindrome(string s, int index, int i) {
        while (index <= i) {
            if (s[index] != s[i]) {
                return false;
            }
            index++;
            i--;
        }
        return true; 
    }


    void solve(vector<vector<string>>& ans, vector<string>& v, int index, string s ){
        //bc
        if(index == s.size()){
            ans.push_back(v);
            return;
        }

        for(int i = index; i < s.size(); i++){
            if(isPalindrome(s, index, i)){
                v.push_back(s.substr(index, i-index +1));
                solve(ans, v, i+1, s);
                v.pop_back();
            }
        }
        

    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>>ans;
        vector<string>v;
        int index =0;
        solve(ans, v, index, s);
        return ans;
        
    }
};
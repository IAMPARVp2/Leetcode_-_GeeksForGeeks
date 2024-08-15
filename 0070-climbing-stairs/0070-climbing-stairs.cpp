class Solution {
public:

     int solveUsingDp(int n,vector<int>&dp){
        //bc
        if(n==1 ||n==0 || n==2){
        return n;
       }
       if(dp[n]!=-1){
        return dp[n];
       }

        dp[n] = solveUsingDp(n-1,dp) + solveUsingDp(n-2,dp);
        return dp[n];
       
    }



    int climbStairs(int n) {
        vector<int>dp(n+1,-1);

    return solveUsingDp(n,dp);
    }

};
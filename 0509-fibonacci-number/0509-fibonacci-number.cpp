class Solution {
public:

    int recSolve(int n){
        if( n==0 || n==1 ){
            return n;
        };
        int ans = recSolve(n-1)+ recSolve(n-2);
        return ans;

    }

    int topDownSolve(int n, vector<int>dp){
         if( n==0 || n==1 ){
            return n;
        };
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = topDownSolve(n-1,dp)+ topDownSolve(n-2,dp);
        return dp[n];


    }
    int fib(int n) {
        vector<int> dp(n+1,-1);

        int ans = topDownSolve(n, dp);
        return ans;
    }
};
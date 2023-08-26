class Solution {
public:

    // memoisation
    int countWays(int i, int j, int m, int n ,vector<vector<int>>& dp){
        if(i >= m || j >= n)    return 0;
        if(i == m - 1 && j == n - 1)    return 1;
        if(dp[i][j] != -1)  return dp[i][j];

        int leftAns = countWays(i+1, j, m, n, dp);
        int rightAns = countWays(i, j+1, m, n, dp);
        int ways = leftAns + rightAns;

        return dp[i][j] = ways;
    }

    int tab(int m, int n){
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        dp[0][0] = 1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!i && !j)    continue;
                int leftAns = 0, rightAns = 0;
                if(i>0)
                    leftAns = dp[i-1][j];
                if(j>0)
                    rightAns = dp[i][j-1];
                dp[i][j] = leftAns + rightAns;
            }
        }
        return dp[m-1][n-1];        
    }

    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        // return countWays(0, 0, m, n, dp);
        return tab(m, n);
    }
};

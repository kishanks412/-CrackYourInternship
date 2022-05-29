class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>> dp(s.length()+1,vector<int> (t.length(),-1));
        return str(s,t,n-1,m-1,dp);
    }
    int str(string s,string t,int n,int m,vector<vector<int>> &dp)
    {
        
        if(m<0)   return 1;
        if(n<0)   return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s[n]==t[m])
             return dp[n][m]=str(s,t,n-1,m-1,dp)+str(s,t,n-1,m,dp);
        return dp[n][m]=str(s,t,n-1,m,dp);
    }
};
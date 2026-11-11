#include<bits/stdc++.h>
using namespace std;

int findTargetSumWays(vector<int>& nums, int target){
    int n = nums.size(), range = 0;
    for(int x : nums)range+=x;
    target = abs(target);
    if((range-target)%2!=0 || target>range)return 0;
    int sum = (range-target)/2;
    vector<vector<int>>dp(n+1 , vector<int>(sum+1 , 0));
    dp[0][0] = 1;
    for(int i = 1 ; i<n+1 ; i++){
        dp[i][0] = dp[i-1][0];
        if(nums[i-1]==0)dp[i][0] = dp[i-1][0]*2;
    }
    for(int i = 1 ;i<n+1 ;i++){
        for(int j = 1; j<sum+1 ; j++){
          if(nums[i-1]<=j){
            dp[i][j] = dp[i-1][j-nums[i-1]]+dp[i-1][j];
          }else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
} 

 int main (){
    vector<int>nums = {1,0,0,0} ;
    int ans = findTargetSumWays(nums, 1);
    cout<<ans;
    return 0;
}
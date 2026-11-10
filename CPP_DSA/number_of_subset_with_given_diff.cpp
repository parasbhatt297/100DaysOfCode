#include<bits/stdc++.h>
using namespace std;



int subsetSum(vector<int>&nums , int sum){
    int n  = nums.size();
    vector<vector<int>>dp(n+1 , vector<int>(sum+1 , 0));
    dp[0][0] = 1;
    for(int i = 1 ; i<n+1 ; i++){
       dp[i][0] = dp[i-1][0];
       if(nums[i-1]==0)dp[i][0] = dp[i-1][0]*2;
    }
        for(int i = 1 ; i<n+1 ; i++){
        for(int j = 1 ;j<sum+1; j++){
              if(nums[i-1]<=j){
                dp[i][j] = dp[i-1][j-nums[i-1]]+dp[i-1][j];
              }else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main(){
    vector<int>nums = {1,0,0};
    int diff = 1 , range = 1 ;
    if((range-diff)%2!=0 || diff>range)return 0;
    int sum = (range-diff)/2;

    //Notice that question has reduced to count subsets with given sum! which we have already solved
    int ans = subsetSum(nums , sum);
    cout<<ans<<endl;
    return 0;
}
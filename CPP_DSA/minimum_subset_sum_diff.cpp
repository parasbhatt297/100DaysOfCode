#include<bits/stdc++.h>
using namespace std;
vector<int> subsetSum(vector<int>&nums , int sum){
     int n= nums.size();
    vector<vector<bool>>dp(n+1 , vector<bool>(sum+1));
    for(int i = 0 ; i<n+1 ; i++){
        for(int j = 0 ; j<sum+1 ; j++){
           if(j==0)dp[i][j]=true;
           else if(i==0)dp[i][j] = false;
        }
    }
    for(int i = 1 ;  i<n+1 ; i++){
        for(int j = 1 ; j<sum+1 ;j++){
            if(nums[i-1]<=j){
                dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
            }else dp[i][j] = dp[i-1][j];
        }
    }
    vector<int>res;
    for(int i = 0 ; i<= sum/2 ; i++)if(dp[n][i])res.push_back(i);
    return res;
}
 int main (){
    vector<int>nums = {1,2,5,7};
    int sum = 0;
    for(int x : nums)sum+=x;
    vector<int>res = subsetSum(nums , sum);
    int n = res.size() , ans = INT_MAX ;
    for(int i = 0 ; i<n ; i++){
        ans = min(ans , sum - 2*res[i]);
    }
    cout<<"Minimum Subset sum Difference : "<<ans;
}
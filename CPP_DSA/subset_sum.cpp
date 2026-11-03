#include<bits/stdc++.h>
using namespace std;

 int main (){
    vector<int>nums = {2,3,5,8 , 10 , 11};
    int n = nums.size()  , sum = 14 ;
    vector<vector<bool>>dp(n+1 , vector<bool>(sum+1));
    for(int i = 0 ; i<n+1 ; i++){
        for(int  j = 0 ; j<sum+1  ; j++){
            if(j==0)dp[i][j]=true;
            else if(i==0)dp[i][j] = false;
        } 
    }
    for(int i = 1 ; i<n+1 ; i++){
        for(int j = 1 ; j<sum+1 ; j++){
            if(nums[i-1]<=j){
                dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
            }else dp[i][j] = dp[i-1][j];
        }
    }
    if(dp[n][sum]){
        cout<<"Subset Sum exist in nums!";
    }else cout<<"Subset Sum doesn't Exist in nums!";
    return 0;
}
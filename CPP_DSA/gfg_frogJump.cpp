#include<bits/stdc++.h>
using namespace std;
     vector<int>dp;
     int solve(vector<int>&nums , int i){
         if(i <= 0 )return 0 ;
         if(dp[i]!=-1)return dp[i];
         int one = INT_MAX , two = INT_MAX ;
         one  = solve(nums , i-1)+abs(nums[i]-nums[i-1]);
         if(i>1)two = solve(nums , i-2)+abs(nums[i]-nums[i-2]);
         return dp[i] = min(one ,two );
     }
    int minCostmemoization(vector<int>& height) {
       int n = height.size();
        dp.assign(n+1 , -1);
        return solve(height , n-1);
    }
      int minCostTabulation(vector<int>&nums) {
     int n = nums.size();
     vector<int>dp(n,0);
     if(n>1)dp[1] = abs(nums[1]-nums[0]);
     for(int i = 2 ; i<n ; i++){
         dp[i] = min(dp[i-1]+abs(nums[i]-nums[i-1]),dp[i-2]+abs(nums[i]-nums[i-2]));
     }
        return dp[n-1];
    }
       int optimal(vector<int>&nums) {
     int n = nums.size();
     if(n<=1)return 0;
     int zero = 0 , one = abs(nums[1]-nums[0]);
     for(int i = 2 ; i<n ; i++){
         int temp1 = one+abs(nums[i]-nums[i-1]);
         int temp2 = zero+abs(nums[i]-nums[i-2]);
         zero = one ;
         one = min(temp1 , temp2);
     }
        return one;
    }
 int main (){
   vector<int> height = {10,30,40,20,50};
   int ans = minCostmemoization(height);
   int secondanswer = minCostTabulation(height);
   int thirdanswer = optimal(height);
   cout<<"Expected Answer : "<<40 <<endl<<"Your Output using Memoization : "<<ans<<endl<<"Your Output using Tabulation : "<<secondanswer<<endl<<"Your Output using Optimal Approach : "<<thirdanswer <<endl;
    return 0;
}
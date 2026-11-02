#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int knapsack(vector<int>&wt , vector<int>&val,int w , int n){
for(int i = 1 ; i<n+1 ; i++){
        for(int j = 1 ; j<w+1 ; j++){
            if(wt[i-1]<=j){
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]] , dp[i-1][j]);
            }else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}
 int main (){
    int w = 7 , n = 4;
    dp.assign(n+1 ,vector<int>(w+1));
    for(int i = 0 ; i<n+1 ; i++){
        for(int j = 0 ; j<w+1 ; j++){
            if(i==0 || j ==0 ){
                dp[i][j]=0;
            }
        }
    }
    vector<int>wt = {1,3,4,5};
    vector<int>val = {1,4,5,7};
   int maxP =  knapsack(wt , val , w,n);
   cout<<"Max Profit You can Achieve is : "<<maxP<<endl;
    return 0;
}
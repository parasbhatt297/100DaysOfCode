#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int knapsack(vector<int>&wt , vector<int>&val,int w , int n){
if(n==0||w==0)return 0;
if(dp[n][w]!=-1)return dp[n][w];
else if(wt[n-1]<=w){
    return dp[n][w] = max(val[n-1]+knapsack(wt,val,w-wt[n-1] , n-1) , knapsack(wt, val ,w , n-1));
}else return dp[n][w] = knapsack(wt, val ,w , n-1);
}
 int main (){
    dp.assign(4+1 ,vector<int>(7+1 , -1));
    vector<int>wt = {1,3,4,5};
    vector<int>val = {1,4,5,7};
   int maxP =  knapsack(wt , val , 7 , 4);
   cout<<"Max Profit You can Achieve is : "<<maxP<<endl;
    return 0;
}
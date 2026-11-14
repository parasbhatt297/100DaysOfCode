#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>&wt ,vector<int>&val, int capacity){
    int n = wt.size();
    vector<vector<int>>dp(n+1 , vector<int>(capacity+1 ));
    for(int i = 0 ; i<n+1 ;i++){
        for(int j = 0  ; j<capacity+1 ; j++){
            if(i==0 || j==0)dp[i][j] = 0 ;
        }
    }
    for(int i = 1 ; i<n+1 ;i++){
        for(int j = 1  ; j<capacity+1 ; j++){
           if(wt[i-1]<=j){
            dp[i][j] = max(val[i-1]+dp[i][j-wt[i-1]] , dp[i-1][j]);
           }else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][capacity];
}
 int main (){
    vector<int>wt = {2,3,4,5,8};
    vector<int>val = {6,3,5,3,2};
    cout<<maxProfit(wt , val , 9);
    return 0;
}
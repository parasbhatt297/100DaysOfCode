#include<bits/stdc++.h>
using namespace std;

 int main (){
    int n ;
    cout<<"Enter the value of Number of Steps : ";
    cin>>n;
    vector<int>dp(n+1,0);
  dp[0] = 1;
  if(n>0)dp[1] = 1;
    for(int i = 2  ; i<n+1 ; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout<<"The Number of Ways to Climb "<<n<<" Stair is : "<<dp[n]<<endl;
    return 0;
}
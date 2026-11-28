#include<bits/stdc++.h>
using namespace std;

 int main (){
    int n ;//n>0
    cin>>n ;
    vector<int>nums;
    for(int i = 0 ; i<n ; i++){
        int val ;
        cin>>val;
        nums.push_back(val);
    }

    //solve 
       int ans = 0;
       long long maxval = 0;
    unordered_map<long long , int >mp;
    for(int i = 0 ; i<n-1 ; i++){
       int maxi = -1 ;
    for(int j = i+1 ; j<n ; j++){
        if(j-i+1 >2)maxi = max(nums[j-1],maxi);
        if(maxi < min(nums[i] , nums[j])){
          long long val = (long long)min(nums[i],nums[j]) * min(nums[i] , nums[j]) * (j-i);
          mp[val]++;
          if(val>=maxval){
            maxval = val ;
            ans = mp[val];
          }
        }
       }
    }
     cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 int solve(vector<int>nums , int k){
    int n = nums.size() , l = 0 , r = 0 , ans = 0;
    while(r<n){
        if(nums[r]==0)k--;
        while(k<0){
            if(nums[l]==0)k++;
            l++;
        }
        ans = max(ans , r-l+1);
        r++;
    }
    return ans;
 }
 int main (){
    int ans = solve({1,1,0,1,1,0,0,1,1,1,1},2);
    cout<<ans;
    return 0;
}
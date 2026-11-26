#include<bits/stdc++.h>
using namespace std;
int findBestValue(vector<int>&nums , int target){ //O(nlogn)
     sort(nums.begin() , nums.end());
     int value = INT_MAX , diff = INT_MAX , tsum = 0 , sum = 0 , n = nums.size();
     for(int x : nums)tsum+=x;
     for(int i = 0 ; i<n ; i++){
       if(sum>target)break;

       int newtarget = (target-sum)/(n-i);
       int idx1 = lower_bound(nums.begin(),nums.end() , newtarget)-nums.begin();
       int idx2 = lower_bound(nums.begin(),nums.end() , newtarget+1)-nums.begin();

       if(idx1==i){
        if(abs(target - (newtarget*(n-i) + sum))< diff){
            value = newtarget;
            diff = abs(target - (newtarget*(n-i)+sum));
        }
       }
       if(idx2==i){
         if(abs(target - ((newtarget+1)*(n-i)+sum))< diff){
            value = newtarget+1;
            diff = abs(target - ((newtarget+1)*(n-i)+sum));
        }
       }
       sum+=nums[i];
     } 
     if(abs(target-tsum) < diff)value = nums[n-1];
     return value;
}
 int main (){
    vector<int>nums = {4,9,3};
    cout<<findBestValue(nums , 10);
    return 0;
}
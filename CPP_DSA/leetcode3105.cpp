#include<bits/stdc++.h>
using namespace std;
// long long outerCount = 0;
// long long innerCount = 0;
//  int longestMonotonicSubarray(vector<int> nums) {
//         int n = nums.size() , maxlen = 1 ;
//         for(int i  =  0 ; i<n-1 ;i++){
//             outerCount++;
//             bool decided  = false , increasing = false;
//             for(int j = i+1 ; j<n ; j++){
//                 innerCount++;
//                if(!decided){
//                 if(nums[j]>nums[j-1])increasing = true;
//                 else if(nums[j]==nums[j-1])break;
//                     decided = true;
//                }else{
//                 if((increasing && nums[j]<=nums[j-1]) || !increasing && nums[j]>=nums[j-1]){
//                     i = j-2;
//                     break;
//                 }
//                }
//                maxlen = max(j-i+1 , maxlen);
//                if(j==n-1)i=j;
//             }
//         }
//         return maxlen;
//     }
int longestMonotonicSubarray(vector<int>nums){
    int n = nums.size(), up = 1 , down = 1 , maxlen = 1;
    for(int i =1 ; i<n ; i++){
          up = nums[i] > nums[i-1] ? up+1 : 1;
            down = nums[i] < nums[i-1] ? down+1 : 1;
            maxlen = max({up, down, maxlen});
    }
    return maxlen;
}
 int main (){
int ans = longestMonotonicSubarray({1,3,2,4,3,5,4,6});
cout<<ans;
// cout << "Outer iterations: " << outerCount << endl;
// cout << "Inner iterations: " << innerCount << endl;
// cout << "Total iterations: " << outerCount + innerCount << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

 int main (){
    int n ;
    cin>>n;
    vector<int>nums;
    for(int i = 0  ; i<n ; i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }
    //0 1 2 1 1 2 0 0 
    int low = 0 ,mid = 0 ,  high = n-1 ;
    while(mid<=high){
        if(nums[mid]==0){
          swap(nums[low],nums[mid]);
          low++,mid++;
        }else if(nums[mid]==2){
            swap(nums[mid]  , nums[high]);
            high--;
        }else mid++;
    }
    cout<<"Final Array is : ";
    for(int x : nums)cout<<x<<" " ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
       vector<vector<int>>res;
    void allSubSequence(vector<int>&nums, int i , vector<int>&temp){
        if(i==nums.size()){
            res.push_back(temp);
            return ;
        }
        allSubSequence(nums , i+1 , temp);
        temp.push_back(nums[i]);
        allSubSequence(nums , i+1 , temp);
        temp.pop_back();
    }
 int main (){
    vector<int>nums = {3,1,2};
    vector<int>temp;
    allSubSequence(nums , 0 ,temp);
    for(auto & arr : res){
       cout<<"[";
       for(int x : arr)cout<<x<<" ";
       cout<<"]"<<endl;
    }
    return 0;
}
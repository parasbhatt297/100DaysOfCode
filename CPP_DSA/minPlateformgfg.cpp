#include<bits/stdc++.h>
using namespace std;
 int minPlatform(vector<int>& arr, vector<int>& dep) {
      vector<int>timer(2400,0);
      for(int i = 0 ; i<arr.size() ; i++){
        for(int j = arr[i] ; j<=dep[i] ; j++){
            timer[j]++;
        }
      }
      int ans = 1 ;
      for(int i = 0 ; i<2400 ; i++ )ans = max(ans , timer[i]); 
      return ans;   
    }
    int optimal(vector<int>&arr , vector<int>&dep){
      int platform = 0 , ans = 0 , n = arr.size() , i = 0 , j = 0 ;
      while(i<n && j<n){
        if(dep[j]>=arr[i]){
          platform++;
          ans  =max(ans , platform);
          i++;
        }else{
          platform--;
          j++;
        }
      }
      return ans;
    }
 int main (){
   vector<int>arr= {900, 940, 950, 1100, 1500, 1800};
    vector<int>dep= {910, 1200, 1120, 1130, 1900, 2000};
    cout<<minPlatform(arr, dep)<<endl;

    // for optimal approach sorting both array is required!
    sort(arr.begin() , arr.end());
    sort(dep.begin() , dep.end());
    cout<<optimal(arr, dep);
    return 0;
}
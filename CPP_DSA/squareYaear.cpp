#include<bits/stdc++.h>
using namespace std;

 int main (){
    int t ;
    cin>>t;
    vector<vector<int>>res;
    for(int i =  0 ; i<t ; i++){
     int val ;
     cin>>val;
    int newval = sqrt(val);
    if(newval*newval == val)res.push_back({0,newval});
    else res.push_back({-1});
    }
    for(auto x : res){
        if(x.size()==1)cout<<-1<<endl;
        else cout<<x[0] << " " << x[1] <<endl;
    }
    return 0;
}
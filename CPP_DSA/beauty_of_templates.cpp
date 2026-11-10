#include<bits/stdc++.h>
using namespace std;
 class node {
    public:
    int val;
    node* next;
    node(int value){
        val = value;
    }
 };
 template<typename t>
 t manualfront(queue<t>& q){
     return q.front();
 }
 int main (){
    vector<int>v = {1,2,3,4,5};
    queue<int>q ;
    queue<node*>nodequeue;
    for(int x : v)q.push(x);
    nodequeue.push(new node(45));
    nodequeue.push(new node(5));
    nodequeue.push(new node(4));
    int frontval = manualfront(q);
    node* frontnode = manualfront(nodequeue) ;
    cout<<frontval<<endl;
    cout<<frontnode->val<<endl;
    bool temp ;
    cout<<temp<<endl;
    int* ptr = &frontval;
    cout<<*ptr;
    return 0;
}
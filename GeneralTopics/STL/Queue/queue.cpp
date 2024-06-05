#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int no,val;
    cin>>no;
    // initiialization
    queue<int> queue;
    // input
    for(int i=0;i<no;i++)
    {
        cin>>val;
        queue.push(val);
    }
    // output
   // queue.pop() pops the element at front. 
    cout<<"The element at the front of the queue:"<<queue.front()<<endl;
    cout<<"The element at the back of the queue:"<<queue.back()<<endl;
    cout<<"The elements in the queue are:"<<endl;
    while(!queue.empty())
    {
        cout<<queue.front()<<" ";
        queue.pop();
    }
    cout<<endl;
    cout<<queue.size();
    return 0;
}
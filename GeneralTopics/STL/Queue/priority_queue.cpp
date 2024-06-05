#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    // maximum heap 
    int no,val;
    cin>>no;
    // initialization
    priority_queue<int> queue; // maximum queue
    priority_queue<int,vector<int>,greater<int>> min_queue; // minimum queue

    // for maximum priority queue.  

    // // input
    for(int i=0;i<no;i++)
    {
        cin>>val;
        queue.push(val);
    }
    // output;
    cout<<"The element at the top is:"<<queue.top()<<endl;
    cout<<"Elements of the queue are:"<<endl;
    while(!queue.empty()) 
    {
        cout<<queue.top()<<" ";
        queue.pop();
    }

    // for minimum priority queue.

    // input
    for(int i=0;i<no;i++)
    {
        cin>>val;
        min_queue.push(val);
    }
    cout<<"The element at the top of the queue is:"<<min_queue.top()<<endl;
    cout<<"The elements in the queue are:"<<endl;
    while(!min_queue.empty())
    {
        cout<<min_queue.top()<<" ";
        min_queue.pop();
    }
    return 0;
}
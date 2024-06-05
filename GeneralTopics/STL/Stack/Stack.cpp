#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{

        int no,val;
        cin>>no;
    // initialization
    stack<int> stack;
    // input
    for(int i=0;i<no;i++)
    {
        cin>>val;
        stack.push(val);
    }
    // output
    while(!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    //initialization
    int no;
    cin>>no;
    deque<int> d1();
    deque<int> d2(no);
    deque<int> d3(no,0);
    //input
    for(int i=0;i<d2.size();i++)
    cin>>d2[i];
    //output
    for(int i=0;i<d2.size();i++)
    cout<<d2[i]<<" ";
    cout<<endl;
    for(int i=0;i<d3.size();i++)
    cout<<d3[i]<<" ";
    cout<<endl;
    // input from front and back
    cout<<"Enter no to be entered at front and back"<<endl;
    int front_input,back_input;
    cin>>front_input>>back_input;
    d2.push_front(front_input);
    d2.push_back(back_input);
    for(int i=0;i<d2.size();i++)
    cout<<d2[i]<<" ";
    cout<<endl;
    // popping from front and back
    d2.pop_front();
    d2.pop_back();
        for(int i=0;i<d2.size();i++)
    cout<<d2[i]<<" ";
    cout<<endl;
    //Sorting function
    sort(d2.begin(),d2.end());
        for(int i=0;i<d2.size();i++)
    cout<<d2[i]<<" ";
    cout<<endl;
    // earesing function
    cout<<"Enter the starting and ending index"<<endl;
    int start_index,end_index;
    cin>>start_index>>end_index;
    d2.erase(d2.begin()+start_index,d2.end()-end_index);
        for(int i=0;i<d2.size();i++)
    cout<<d2[i]<<" ";
    cout<<endl;
    return 0;
}
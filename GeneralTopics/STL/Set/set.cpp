#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int no,val,r1,r2,r3,r4;
    cin>>no;
    // initialization
    set<int> set;
    // input
    for(int i=0;i<no;i++)
    {
        cin>>val;
        set.insert(val);
    }
    // output using iterator
    auto it=set.begin();
    while(it!=set.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    cout<<endl;
    // remove by value 
    cout<<"Enter the value to be removed from the set"<<endl;
    cin>>r1;
    set.erase(r1);
        auto it3=set.begin();
    while(it3!=set.end())
    {
        cout<<(*it3)<<" ";
        it3++;
    }
    cout<<endl;
    // remove using iterators
    cout<<"Enter 2 elements to be removed from the set"<<endl;
    cin>>r2>>r3;
    auto it1=set.find(r2);
    auto it2 = set.find(r3);
    set.erase(it1,it2);
        auto it4=set.begin();
    while(it4!=set.end())
    {
        cout<<(*it4)<<" ";
        it4++;
    }
    cout<<endl; 
    return 0;
}
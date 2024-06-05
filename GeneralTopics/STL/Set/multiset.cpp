#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void print_set(multiset<int> set)
{
        auto it = set.begin();
    while(it!=set.end())
        cout<<(*it++)<<" ";
    cout<<endl;
}
int main()
{
    int no,val,r1,r2;
    cin>>no;
    // initialization
    multiset<int> multiset;
    // input
    for(int i=0;i<no;i++)
    {
        cin>>val;
        multiset.insert(val);
    }
    // output
    print_set(multiset);
    // earase function
    cout<<"Enter the number to be removed from the set"<<endl;
    cin>>r1;
    multiset.erase(r1);
    print_set(multiset);
    // remove 1 occurance of the repeating.
    cout<<"Enter the number to be removed from the set"<<endl;
    cin>>r2;
    multiset.erase(multiset.find(r2));
    print_set(multiset);
    return 0;
}
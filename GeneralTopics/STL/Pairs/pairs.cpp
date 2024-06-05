#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    //initialization
    pair<int,int> p1;
    pair<int,pair<int,int>> p2;
    // int no;
    // vector<pair<int,int>> p3(no);
    // input
    cout<<"Enter input for p1"<<endl;
    cin>>p1.first>>p1.second;
    cout<<"Enter input for p2"<<endl;
    cin>>p2.first>>p2.second.first>>p2.second.second;
    // cout<<"Enter the number of elements"<<endl;
    // cin>>no;
    // for(int i=0;i<no;i++)
    // cin>>p3[i].first>>p3[i].second;
    //output
    cout<<"The first pair is:( "<<p1.first<<" "<<p1.second<<" )"<<endl;
    cout<<"The second pair is:( "<<p2.first<<" "<<"( "<<p2.second.first<<" "<<p2.second.second<<" ))"<<endl;
    // cout<<"The array of pairs is:"<<endl;
    // for(int i=0;i<p3.size();i++)
    // cout<<p3[i].first<<" "<<p3[i].second<<endl;
    return 0;
}
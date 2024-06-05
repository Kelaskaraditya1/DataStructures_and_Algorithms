#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void print_map(map<int,int> map)
{
    for(auto it:map)
    cout<<it.first<<" "<<it.second<<endl;
    cout<<endl;
}
int main()
{
    int key,value,no,k,v;
    // initialization
    map<int,int> map1;
    map<pair<int,int>,int> map2;
    map<int,pair<int,int>> map3;
    // input
    cin>>no;
    for(int i=0;i<no;i++)
    {
        cout<<"Enter the key and value pair"<<endl;
        cin>>key>>value;
        map1[key]=value;
    }
    // output
    for(auto it:map1)
    cout<<"The key is:"<<it.first<<" The value is:"<<it.second<<endl;
    /*finindg indivisual element using value : use iterator method
                          element using key : array acess method map[key]*/                           
    auto it = map1.find(2);
    cout<<(*it).second;
    // earase using key
    cout<<"Enter the key to be removed from map"<<endl;
    cin>>k;
    // map1.erase(k);
    auto it1 = map1.find(k);
    map1.erase(it1);
    print_map(map1);
    return 0;
}

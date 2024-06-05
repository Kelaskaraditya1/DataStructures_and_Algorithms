#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    // // initialization 
    // vector<int> a();
    // int no;
    // cin>>no;
    // vector<int> b(no);
    // for(int i=0;i<b.size();i++)
    // cin>>b[i];
    // vector<int> c(no,0);// initialize the vector wiith 0.
    // cout<<"The size of vector b is:"<<b.size()<<endl;
    // // cout<<"The size of vector c is:"<<c.size()<<endl;
    // cout<<"The Vector b is"<<endl;
    // for(int i=0;i<b.size();i++)
    // cout<<b[i]<<" ";
    // cout<<endl;
    // // cout<<"The Vector c is"<<endl;
    // // for(int i=0;i<c.size();i++)
    // // cout<<c[i]<<" ";
    // // input 
    // int input;
    // cin>>input;
    // b.push_back(input);
    // for(int i=0;i<b.size();i++)
    // cout<<b[i]<<" ";
    // cout<<endl;
    // // pop out
    // //
    // b.pop_back();
    // cout<<"After poping back last item"<<endl;
    // for(int i=0;i<b.size();i++)
    // cout<<b[i]<<" ";
    // cout<<endl;
    // // sorting function
    // sort(b.begin(),b.end());
    // cout<<"After sorting"<<endl;
    // for(int i=0;i<b.size();i++)
    // cout<<b[i]<<" ";
    // cout<<endl;
    // // for accessing element
    // for(int i=0;i<b.size();i++)
    // cout<<b.at(i)<<" ";
    // cout<<endl;
    // // for copying elements from one vector into another vector
    // vector<int> d(b);
    // cout<<" The vector b is:"<<endl;
    // for(int i=0;i<b.size();i++)
    // cout<<b.at(i)<<" ";
    // cout<<endl;
    //     cout<<" The vector d is:"<<endl;
    // for(int i=0;i<d.size();i++)
    // cout<<d.at(i)<<" ";
    // cout<<endl;
    // int no;
    // cin>>no;
    // vector<int> a(no),b(no);
    // for(int i=0;i<b.size();i++)
    // cin>>b[i];
    // for(int i=0;i<a.size();i++)
    // {
    //     int idex=(i+2)%no;
    //     a[idex]=b[i];
    // }
    // for(int i=0;i<a.size();i++)
    // cout<<a[i]<<" ";

    // iteratios 
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    vector<int>::iterator it = array.begin();
    while(it!=array.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    return 0;
}
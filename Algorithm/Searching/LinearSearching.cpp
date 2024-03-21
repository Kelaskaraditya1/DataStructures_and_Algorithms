#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool linearSearch(vector<int> array,int key)
{
    for(int i=0;i<array.size();i++)
    {
        if(array[i]==key)
        return true;
    }
    return false;
}
int main()
{
    int no,key;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cin>>key;
    bool status=linearSearch(array,key);
    if(status)
    cout<<"Key is Present"<<endl;
    else
    cout<<"Key is Absent"<<endl;  
    return 0;
}
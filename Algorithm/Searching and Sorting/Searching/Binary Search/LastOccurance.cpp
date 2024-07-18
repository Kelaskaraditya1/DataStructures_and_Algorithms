#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int lastOccurance(vector<int> array,int key)
{
    int low=0,high=array.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]<=key)
        low=mid+1;
        else 
        high=mid-1;
    }
    if(array[high]==key)
    return high;
    return -1;
}
int main()
{
        int no,key;
    cin>>no>>key;
    vector<int> array(no);
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    cout<<"The 1st occurance is at: "<<lastOccurance(array,key);
    return 0;
}
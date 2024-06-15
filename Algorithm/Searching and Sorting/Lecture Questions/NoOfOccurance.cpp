#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int lastOccurance(vector<int> array,int target)
{
    int low=0,high=array.size()-1,index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==target)
        {
            index=mid;
            low=mid+1;
        }
        else if(array[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    return index;
}
int firstOccurance(vector<int> array,int target)
{
    int low=0,high=array.size()-1,index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==target)
        {
            index=mid;
            high=mid-1;
        }
        else if(array[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    return index;
}
int noOfOccurance(vector<int> array,int target)
{
    int count=0;
    sort(array.begin(),array.end());
    int first=firstOccurance(array,target);
    int last=lastOccurance(array,target);
    for(int k=first;k<=last;k++)
    {
        if(array[k]==target)
        count++;
    }
    
    return count;
}
int main()
{
    int no,target;
    cin>>no>>target;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<"The element appears for "<<noOfOccurance(array,target)<<" timer"<<endl;
    return 0;
}
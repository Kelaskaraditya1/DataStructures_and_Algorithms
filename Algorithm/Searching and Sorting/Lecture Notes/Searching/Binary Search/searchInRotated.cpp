#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int getPivotIndex(vector<int> &array)
{
    int low=0,high=array.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]<array[mid-1])
        return mid-1;
        else if(array[mid]>array[mid+1])
        return mid;
        else if(array[mid]<array[low])
        high=mid-1;
        else 
        low=mid+1;
    }
    return -1;
}
int binarySearch(vector<int> &array,int low,int high,int target)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==target)
        return mid;
        else if(array[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int search(vector<int> array,int target)
{
    int pivotIndex=getPivotIndex(array);
    if(array[0]<=target&&target<=array[pivotIndex])
    return binarySearch(array,0,pivotIndex,target);
    else if(array[pivotIndex+1]<=target&&target<=array[array.size()-1])
    return binarySearch(array,pivotIndex+1,array.size()-1,target);
    return -1;
}
int main() 
{
    int no,target;
    cin>>no>>target;
    vector<int> array(no);
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    if(search(array,target)!=-1)
    cout<<"The target is present at: "<<search(array,target)<<" index"<<endl;
    return 0;
}
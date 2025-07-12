#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int peakElement(vector<int> array)
{
    int low=0,high=array.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]>array[mid+1] && array[mid]>array[mid-1])
        return array[mid];
        else if(array[mid]<array[mid+1])
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int main()
{
        int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    int value=peakElement(array);
    if(value!=-1)
    cout<<"Peak element is: "<<value;
    else
    cout<<"No peak element";
    return 0;
}
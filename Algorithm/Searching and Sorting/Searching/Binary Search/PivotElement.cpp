#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int pivotIndex(vector<int> array)
{
    int low=0,high=array.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]>array[mid+1])
        return mid;
        else if(array[mid]<array[mid-1])
        return mid-1;
        else if(array[mid]<array[low])
        high=mid-1;
        else 
        low=mid+1;
    }
    return low-1;
}
int main()
{
        int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    cout<<"Pivot index: "<<pivotIndex(array);
    return 0;
}
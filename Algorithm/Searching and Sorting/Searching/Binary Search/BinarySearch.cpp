#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// bool binarySearch(vector<int> array,int l,int h,int key)
// {
//     while(l<=h)
//     {
//     int mid=(l+h)/2;
//     if(array[mid]==key)
//     return true;
//     else if(array[mid]<key)
//     {
//         l=mid+1;
//     }
//     else if(array[mid]>key)
//     {
//         h=mid-1;
//     }
//     }
//     return false;
// }


// recursive approach:

int binarySearch(vector<int> array,int low,int high,int target)
{
    if(low>high)
    return -1;
    else
    {
        int mid=(low+high)/2;
        if(array[mid]==target)
        return mid;
        else if(array[mid]>target)
        binarySearch(array,low,mid-1,target);
        else 
        binarySearch(array,mid+1,high,target);
    }
}
int main()
{
    int no,key;
    cin>>no>>key;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(array[i]>array[j])
                swap(array[i],array[j]);
        }
    }
    int status = binarySearch(array,0,no-1,key);
    if(status!=-1)
    cout<<"Key is present at "<<status<<endl;
    else
    cout<<"Key is absent"<<endl;
    return 0;
}
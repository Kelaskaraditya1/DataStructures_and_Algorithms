#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int lastOccurance(vector<int> array,int target)
{

    // better approach:


    // int l=0,h=array.size()-1,mid,index=-1;
    // while(l<=h)
    // {
    //     mid=(l+h)/2;
    //     if(array[mid]==target)
    //     {
    //         index=mid+1;
    //         break;
    //     }
    //     else if(array[mid]<target)
    //     l=mid+1;
    //     else
    //     h=mid-1;
    // }
    // while(index<array.size())
    // {
    //     if(array[index]==target)
    //     index++;
    //     else
    //     break;
    // }
    // return index-1;

    //optimal appraoch:
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
int main()
{
    int no,target;
    cin>>no>>target;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    int index=lastOccurance(array,target);
    if(target!=-1)
    cout<<"The last occurance is:"<<index<<endl;
    else
    cout<<"No last occurance"<<endl;
    return 0;
}
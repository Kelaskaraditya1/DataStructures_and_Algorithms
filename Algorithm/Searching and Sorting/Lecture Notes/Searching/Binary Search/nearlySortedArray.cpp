#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int binarySearch(vector<int> array,int target)
{
    int low=0,high=array.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==target)
        return mid;
        else if(array[mid-1]==target&&(mid-1)>=0)
        return mid-1;
        else if(array[mid+1]==target&&(mid+1)<=array.size()-1)
        return mid+1;
        else if(array[mid]>target)
        {
            if(mid-2>=0)
            high=mid-2;
        }
        else
        {
            if(mid+2<=array.size()-1)
            low=mid+2;
        }
    }
    return -1;
}
int main()
{
    int no,target;
    cin>>no>>target;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<binarySearch(array,target);
    return 0;
}
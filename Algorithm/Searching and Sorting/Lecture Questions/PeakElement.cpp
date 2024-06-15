#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int peakElement(vector<int> array)
{
    int low=0,high=array.size()-1,ans;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]<array[mid+1])
        low=mid+1;
        else if(array[mid]>array[mid+1])
        {
            ans=array[mid];
            high=mid-1;
        }
        else if((array[mid]>array[mid-1])&&(array[mid]>array[mid+1]))
        return array[mid];
    }
    return ans;
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<peakElement(array)<<endl;
    return 0;
}
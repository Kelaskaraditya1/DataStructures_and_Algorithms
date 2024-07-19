#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
set<pair<int,int>> findUniquePair(vector<int> array,int target)
{
    int i=0,j=1;
    set<pair<int,int>> set;
    sort(array.begin(),array.end());
    while(j<array.size())
    {
        int difference=array[j]-array[i];
        if(difference==target)
        {
            set.insert({array[i],array[j]});
            i++,j++;
        }
        else if(difference<target)
        j++;
        else
        i++;
        if(i==j)
        j++;
    }
    return set;
}
int binarySearch(vector<int> array,int low,int target)
{
    int high=array.size()-1;
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
set<pair<int,int>> usingBinarySearch(vector<int> array,int target)
{
    set<pair<int,int>> set;
    for(int i=0;i<array.size();i++)
    {
        int k=array[i]+target;
        if(binarySearch(array,i+1,k)!=-1)
        set.insert({array[i],k});
    }
    return set;
}
int main()
{
    int no,target;
    cin>>no>>target;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    set<pair<int,int>> pairSet=usingBinarySearch(array,target);
    for(auto it:pairSet)
    cout<<it.first<<" "<<it.second<<endl;
    return 0;
}
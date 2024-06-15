#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int lowerBound(vector<int> array,int target)
{
    int low=0,high=array.size()-1,ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]>=target)
        {
            ans=array[mid];
            high=mid-1;
        }
        else if(array[mid]<target)
        low=mid+1;
    }
    return ans;
}
int main()
{
    int no,target;
    cin>>no>>target;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    int index=lowerBound(array,target);
    auto it=lower_bound(array.begin(),array.end(),target)-array.begin();
    cout<<array[it]<<endl;
    // cout<<index<<endl;
    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int missingElement(vector<int> array)
{
    sort(array.begin(),array.end());
    int low=0,high=array.size()-1,mid,ans=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(array[mid]-mid==1)
        low=mid+1;
        else if(array[mid]==2)
        {
            ans=mid;
            high=mid-1;
        }
    }
    return ans+1;
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<"missing element is: "<<missingElement(array)<<endl;
    return 0;
}
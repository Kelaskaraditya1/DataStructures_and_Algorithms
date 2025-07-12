#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int singleElement(vector<int> array)
{
    if(array.size()==1)
    return array[0];
    else if(array[0]!=array[1])
    return array[0];
    else if(array[array.size()-1]!=array[array.size()-2])
    return array[array.size()-1];
    int low=1,high=array.size()-2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]!=array[mid-1]&&array[mid]!=array[mid+1])
        return array[mid];
        else if(((mid&1==1)&&(array[mid-1]==array[mid]))||((mid&1==0)&&(array[mid]==array[mid+1])))
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
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<"Single element:"<<singleElement(array)<<endl;
    return 0;
}
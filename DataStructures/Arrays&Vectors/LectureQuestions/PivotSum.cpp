#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int pivotIndex(vector<int> array)
{
    vector<int> left_sum(array.size(),0);
    vector<int> right_sum(array.size(),0);
    for(int i=1;i<array.size();i++)
    left_sum[i]=left_sum[i-1]+array[i-1];
    for(int j=array.size()-2;j>=0;j--)
    right_sum[j]=right_sum[j+1]+array[j+1];
    for(int i=0;i<array.size();i++)
    {
        if(left_sum[i]==right_sum[i])
        return i;
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
    int index=pivotIndex(array);
    if(index!=-1)
    cout<<"The Pivot index is:"<<index<<endl;
    else
    cout<<"No Pivot index doesnot exist."<<endl;
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void merge(vector<int> &array,int l,int mid,int h)
{
    int i=l,j=mid+1;
    vector<int> b;
    while(i<=mid&&j<=h)
    {
        if(array[i]<=array[j])
        b.push_back(array[i++]);
        else
        b.push_back(array[j++]);
    }
    while(i<=mid)
    b.push_back(array[i++]);
    while(j<=h)
    b.push_back(array[j++]);
    for(int k=l;k<=h;k++)
    array[k]=b[k-l];
}
void mergeSort(vector<int> &array,int l,int h)
{
    if(l<h)
    {
    int mid=(l+h)/2;
    mergeSort(array,l,mid);
    mergeSort(array,mid+1,h);
    merge(array,l,mid,h);
    }
}
int main()
{
        int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    mergeSort(array,0,array.size()-1);
    cout<<"After sorting"<<endl;
    for(int i=0;i<array.size();i++)
    cout<<array[i]<<" ";
    return 0;
}
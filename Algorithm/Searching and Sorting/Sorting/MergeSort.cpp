#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void merge(vector<int> &array,int l,int mid,int h)
{
    int i=l,j=mid+1,k=0;
    vector<int> b(h+1);
    while(i<=mid&&j<=h)
    {
        if(array[i]<array[j])
        b[k++]=array[i++];
        else
        b[k++]=array[j++];
    }
    if(i<mid)
    {
        while(i<=mid)
        b[k++]=array[i++];
    }
    if(j<h)
    {
        while(j<=h)
        b[k++]=array[j++];
    }
    for(int k=0,i=l;k<h;k++)
    array[i]=b[k];
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
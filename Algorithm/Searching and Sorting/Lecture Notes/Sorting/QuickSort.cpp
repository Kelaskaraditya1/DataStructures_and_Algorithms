#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int partition(vector<int> &array,int l,int h)
{
    int i=l-1,j=l;
    while(j<=h)
    {
        if(array[j]<array[h])
        swap(array[++i],array[j++]);
        else
        j++;
    }
    swap(array[++i],array[h]);
    return i;
}
void quickSort(vector<int> &array,int l,int h)
{
    if(l<h)
    {
        int pivot_index=partition(array,l,h);
        quickSort(array,l,pivot_index-1);
        quickSort(array,pivot_index+1,h);
    }
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    quickSort(array,0,array.size()-1);
    cout<<"After sorting"<<endl;
    for(int i=0;i<array.size();i++)
    cout<<array[i]<<" ";
    return 0;
}
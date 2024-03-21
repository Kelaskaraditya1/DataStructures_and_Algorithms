#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void SelectionSortByMinElement(vector<int> &array)
{
    int i=0;
    while(i<array.size())
    {
        int min_index=i;
        for(int j=i+1;j<array.size();j++)
        {
            if(array[j]<array[min_index])
            min_index=j;
        }
        swap(array[i++],array[min_index]);
    }
}
void SelectionSort(vector<int> &array)
{
    int i=array.size()-1;
    while(i>0)
    {
        int max_index=i;
        for(int j=i-1;j>=0;j--)
        {
            if(array[j]>array[max_index])
            max_index=j;
        }
        swap(array[i--],array[max_index]);
    }
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    // SelectionSortByMinElement(array);
    SelectionSort(array);
    for(int i=0;i<array.size();i++)
    cout<<array[i]<<" ";
    return 0;
}
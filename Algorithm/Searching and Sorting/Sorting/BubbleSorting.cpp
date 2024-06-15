#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void bubbleSort(vector<int> &array)
{
    for(int i=0;i<array.size();i++)
    {
        for(int j=i+1;j<array.size();j++)
        {
            if(array[i]>array[j])
            swap(array[i],array[j]);
        }
    }
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    bubbleSort(array);
    cout<<"after sorting"<<endl;
    for(int i=0;i<array.size();i++)
    cout<<array[i]<<" ";
    return 0;
}

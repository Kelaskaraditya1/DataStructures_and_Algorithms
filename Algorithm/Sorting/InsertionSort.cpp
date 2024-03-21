#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void insertionSort(vector<int> &array)
{
    for(int i=1; i<array.size(); i++)
    {
        int tmp=array[i],j=i-1;
        while(j>=0)
        {
            if(array[j]>tmp)
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=tmp;
    }
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    insertionSort(array);
    cout<<"After sorting"<<endl;
    for(int i=0;i<no;i++)
    cout<<array[i]<<" ";
    return 0;
}
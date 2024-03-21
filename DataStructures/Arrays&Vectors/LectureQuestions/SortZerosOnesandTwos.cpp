#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void sortZerosOnesandTwo(vector<int> &array)
{
    int l=0,j=array.size()-1,k=0;
    while(k<=j)
    {
        if(array[k]==0)
        swap(array[k++],array[l++]);
        else if(array[k]==2)
        swap(array[j--],array[k]);
        else
        k++;
    }
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    sortZerosOnesandTwo(array);
    cout<<"After sorting"<<endl;
    for(int i=0;i<array.size();i++)
    cout<<array[i]<<" ";
    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void sortPositiveandNegative(vector<int> &array)
{
    int i=0;
    for(int j=0;j<array.size();j++)
    {
        if(array[j]<0)
            swap(array[i++],array[j]);
    }
}
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    sortPositiveandNegative(array);
    cout<<"After sorting"<<endl;
    for(int i=0;i<array.size();i++)
    cout<<array[i]<<" ";
    return 0;
}
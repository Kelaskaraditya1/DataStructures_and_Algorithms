#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
double MaximumAverage(vector<int> array,int k)
{
    int i=0,j=k-1,sum=0,ind=0,max_element=INT_MIN;
    vector<int> sum_array(array.size());
    for(int l=i;l<=j;l++)
    sum+=array[l];
    sum_array[ind++]=sum;
    while(j<array.size())
    {
        sum=sum-array[i++]+array[++j];
        sum_array[ind++]=sum;
    }
    for(int i=0;i<sum_array.size();i++)
    max_element=max(max_element,sum_array[i]);
    return (double) max_element/k;
}
int main()
{
    int no,k;
    cin>>no>>k;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<"The average of maximum length array is: "<<MaximumAverage(array,k)<<endl;
    return 0;
}
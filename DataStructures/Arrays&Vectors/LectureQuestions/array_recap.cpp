#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void print_extremes(vector<int> array)
{
    int l=0,h=array.size()-1;
    while(l<h||l==h)
        cout<<array[l++]<<" , "<<array[h--]<<endl;
}
vector<int> reverse_array(vector<int> &array)
{
    int l=0,h=array.size()-1;
    while(l<h||l==h)
    {
        int tmp = array[l];
        array[l++]=array[h];
        array[h--]=tmp;
    }
    return array;
}
vector<int> sort_array(vector<int> &array)
{
    for(int i=0;i<array.size();i++)
    {
        for(int j=i+1;j<array.size();j++)
        {
            if(array[i]>array[j])
            swap(array[i],array[j]);
        }
    }
    return array;
}
vector<int> sort_zero_and_ones(vector<int> &array)
{
    int i=0,j=array.size()-1;
    while(j<array.size())
    {
        if(array[j]==0)
        swap(array[j++],array[i++]);
        else
        j++;
    }
    return array;
}
int unique_element(vector<int> &array)
{
    int ans = 0;
    for(int i=0;i<array.size();i++)
    ans=ans^array[i];
    return ans;
}
void print_pairs(vector<int> &array)
{
    for(int i=0;i<array.size();i++)
    {
        for(int j=0;j<array.size();j++)
        cout<<"The Pair at i="<<i<<" and j="<<j<<" is ( "<<array[i]<<","<<array[j]<<" )."<<endl;
    }
}
vector<int> shift_by_ones(vector<int> &array)
{
    int tmp = array[array.size()-1];
    for(int i=array.size()-2;i>=1;i--)
    array[i+1]=array[i];
    array[0]=tmp;
    return array;
}
vector<vector<int>> transpose(vector<vector<int>> &array)
{
    int rows=array.size()-1,cols=array[0].size()-1;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i+1;j++)
        swap(array[i][j],array[j][i]);
    }
    return array;
}
int main()
{
    // int no;
    // cin>>no;
    // vector<int> array(no);
    // for(int i=0;i<no;i++)
    // cin>>array[i];
    // // print_extremes(array);
    // // vector<int> b=reverse_array(array);
    // // for(int i=0;i<b.size();i++)
    // // cout<<b[i]<<" ";
    // vector<int> b = sort_array(array);
    // for(int i=0;i<b.size();i++)
    // cout<<b[i]<<" ";
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//    vector<int> b = sort_zero_and_ones(array);
//    for(int i=0;i<b.size();i++)
//    cout<<b[i]<<" ";
// vector<int> array(no);
// for(int i=0;i<no;i++)
// cin>>array[i];
// cout<<"The unique element in the array is: "<<unique_element(array)<<endl;
// print_pairs(array);
// vector<int> b=shift_by_ones(array);
// for(int i=0;i<b.size();i++)
// cout<<b[i]<<" ";
int rows,cols;
cin>>rows>>cols;
vector<vector<int>> array(rows,vector<int> (cols,0));
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    cin>>array[i][j];
}
vector<vector<int>> b = transpose(array);
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    cout<<b[i][j]<<" ";
    cout<<endl;
}
    return 0;
}
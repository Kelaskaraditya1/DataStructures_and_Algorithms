#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> rotateArray(vector<int> &array,int k)
{
    vector<int> reverse(array.size());
    for(int i=0;i<array.size();i++)
    {
        int new_index=(i+k)%array.size();
        reverse[new_index]=array[i];
    }
    return reverse;
}
int main()
{
    int no,k;
    cin>>no>>k;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    vector<int> reverse = rotateArray(array,k);
    for(int i=0;i<reverse.size();i++)
    cout<<reverse[i]<<" ";
    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> closestElement(vector<int> &array,int no,int target)
{
    vector<int> ans;
    int low=0,high=array.size()-1;
    while((high-low)>=no)
    {
        if(abs(target-array[low])>abs(target-array[high]))
        low++;
        else
        high--;
    }
    for(int i=low;i<=high;i++)
    ans.push_back(array[i]);
    return ans;
}
int main()
{
    int no,k,target;
    cin>>no>>k>>target;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    vector<int> ans=closestElement(array,k,target);
    for(auto i:ans)
    cout<<i<<" ";
    return 0;
}
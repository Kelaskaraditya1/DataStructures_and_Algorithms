#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int longestSubarray(vector<int> &array)
{
    int sum=0,max_leng=INT_MIN;
    map<int,int> map;
    for(int i=0;i<array.size();i++)
    {
        sum+=array[i];
        if(sum==0)
        max_leng=max(max_leng,i+1);
        else if(map.find(sum)!=map.end())
        max_leng=max(max_leng,i-map[sum]);
        else 
        map[sum]=i;
    }
    return max_leng;
} 
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    cout<<"The length of longest subarray is:"<<longestSubarray(array)<<endl;
    return 0;
}
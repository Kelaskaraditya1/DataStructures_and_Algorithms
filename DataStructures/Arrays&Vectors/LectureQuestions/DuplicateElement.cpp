#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int duplicateElement(vector<int> array)
{
    for(int i=0;i<array.size();i++)
    {
        for(int j=i+1;j<array.size();j++)
        {
            if(array[j]>array[i])
            swap(array[i],array[j]);
        }
    }
    for(int i=0;i<array.size();i++)
    {
        if(array[i]!=i+1)
        return array[i];
    }
}
int main()
{
    return 0;
}

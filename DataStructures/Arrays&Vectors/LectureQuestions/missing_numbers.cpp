#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int missing_number(vector<int> array,int no)
{
    for(int i=0;i<array.size();i++)
    {
        for(int j=i+1;j<array.size();j++)
        {
            if(array[i]>array[j])
            swap(array[i],array[j]);
        }
    }
    for(int i=0;i<array.size();i++)
    {
        if(array[i]!=i)
        return i;
    }
    return array.size();
}
// int missing_number(vector<int> &array,int no)
// {
//     int missing=0;
//     for(int i=0;i<array.size();i++)
//     {
//         for(int j=i+1;j<array.size();j++)
//         {
//             if(array[i]>array[j])
//             swap(array[i],array[j]);
//         }
//     }
//     int size=array[array.size()-1];
//     for(int i=0;i<array.size();i++)
//     missing=missing^array[i];
//     for(int i=0;i<=no;i++)
//     missing=missing^i;
//     return missing;
// }
int main()
{
    int no;
    cin>>no;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<"The missing number is:"<<missing_number(array,no)<<endl;
    return 0;
}
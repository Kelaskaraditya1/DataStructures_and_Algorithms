#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int binarySearch(vector<int> array,int key)
{
    int low=0,high=array.size();
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==key)
        return mid;
        else if(array[mid]<key)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int main()
{
    int no,key;
    cin>>no>>key;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    int index=binarySearch(array,key);
    if(index==-1)
    cout<<"Key is absent"<<endl;
    else
    cout<<"key is present at "<<index<<" position"<<endl;
    return 0;
}
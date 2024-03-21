#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool KeyPair(vector<int> array,int key)
{
    int l=0,h=array.size()-1;
    while(l<h)
    {
        if((array[l]+array[h])==key)
        return true;
        else if(array[l]+array[h]>key)
        h--;
        else if(array[l]+array[h]<key)
        l++;
    }
    return false;
}
int main()
{
    int no,key;
    cin>>no>>key;
    vector<int> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    sort(array.begin(),array.end());
    if(KeyPair(array,key))
    cout<<"Key Pair Exists"<<endl;
    else
    cout<<"Key Pair donot exists"<<endl;
    return 0;
}
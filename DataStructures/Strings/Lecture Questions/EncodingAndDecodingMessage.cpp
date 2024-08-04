#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string encodeMessage(string key,string message){
    // without hashmap.
    char map[1000]={-1},start='a';
    for(auto it:key){
        if(it!=' '&&map[it]==-1)
        map[it]=start++;
    }
    string ans;
    for(auto it:message){
        if(it==' ')
        ans.push_back(' ');
        else
        ans.push_back(map[it]);
    }
    return ans;
}
int main()
{
    string key,message;
    cout<<"Enter the key"<<endl;
    getline(cin,key);
    cout<<"Enter the message"<<endl;
    getline(cin,message);
    cout<<"The encoded message is:"<<encodeMessage(key,message);
    return 0;
}
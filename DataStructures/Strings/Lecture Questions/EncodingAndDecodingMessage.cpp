#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string encodeMessage(string key,string message){

// without hashmap 

    // vector<char> mapping(1000,-1);
    // char count='a';
    // string ans;
    // for(auto it:key){
    //     if(it!=' '&&mapping[it]==-1)
    //     mapping[it]=count++;
    // }
    // for(auto it:message){
    //     if(it==' ')
    //     ans.append(" ");
    //     else
    //     ans.push_back(mapping[it]);
    // }

// with Hashmap

    map<int,char> map;
    char count='a';
    string ans;
    for(auto it:key){
        if(it!=' '&&map.find(it)==map.end())
        map[it]=count++;
    }
    for(auto it:message){
        if(it==' ')
        ans.append(" ");
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
    cout<<"Enter the Enccoded message"<<endl;
    getline(cin,message);
    cout<<"The Decoded message is:"<<encodeMessage(key,message);
    return 0;
}
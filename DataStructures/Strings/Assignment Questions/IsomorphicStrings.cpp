#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isStringIsomorphic(string str1,string str2){
    char hashTable[256]={0};
    bool isMapped[256]={false};
    for(int i=0;i<str1.length();i++){
        if(hashTable[str1[i]]==0&&isMapped[str2[i]]==false){
            hashTable[str1[i]]=str2[i];
            isMapped[str2[i]]=true;
        }
    }
    for(int i=0;i<str1.length();i++){
        if(hashTable[str1[i]]!=str2[i])
        return false;
    }
    return true;
}
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    if(isStringIsomorphic(str1,str2))
    cout<<"Strings are Isomorphic"<<endl;
    else
    cout<<"Strings are not Isomorphic"<<endl;
    return 0;
}
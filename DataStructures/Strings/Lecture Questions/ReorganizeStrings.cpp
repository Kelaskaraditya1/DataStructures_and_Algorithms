#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string reorganizeString(string &str){
    int hash[26]={0},index=0,maxCount=INT_MIN;
    char mostFreqChar;
    for(int i=0;i<str.length();i++)
    hash[str[i]-'a']++;
    for(int i=0;i<26;i++){
        if(maxCount<hash[i]){
            maxCount=hash[i];
            mostFreqChar=hash[i]+'a';
        }
    }
    while(index<str.length()&&maxCount>0){
        str[index]=mostFreqChar;
        maxCount--;
        index=index+2;
    }
    if(maxCount!=0)
    return "";
    hash[mostFreqChar-'a']=0;
    for(int i=0;i<26;i++){
        while(hash[i]>0){
            if(index>str.length())
            index=1;
            else{
                str[index]=hash[i]+'a';
                hash[i]--;
                index=index+2;
            }
        }
    }
    return str;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<reorganizeString(str)<<endl;
    return 0;
}
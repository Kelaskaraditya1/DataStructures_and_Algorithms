#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string mapping(string str){
    string mapping;
    map<int,char> map;
    char count='a';
    for(int i=0;i<str.length();i++){
        if(map.find(str[i])==map.end())
        map[str[i]]=count++;
    }
    for(int i=0;i<str.length();i++){
        if(map.find(str[i])!=map.end())
        mapping.push_back(map[str[i]]);
    }
    return mapping;
}
int main()
{
    vector<string> ans;
    string pattern;
    int no;
    cout<<"Enter the pattern"<<endl;
    getline(cin,pattern);
    cout<<"Enter the no of words"<<endl;
    cin>>no;
    vector<string> words(no);
    for(int i=0;i<no;i++){
        cout<<"Enter the word"<<endl;
        cin>>words[i];
    }
    string mappingString=mapping(pattern);
    for(int i=0;i<no;i++){
        string word=words[i];
        if(mapping(word)==mappingString)
        ans.push_back(word);
    }
    cout<<"The words who match the pattern are:"<<endl;
    for(auto it:ans)
    cout<<it<<" ";
    return 0;
}
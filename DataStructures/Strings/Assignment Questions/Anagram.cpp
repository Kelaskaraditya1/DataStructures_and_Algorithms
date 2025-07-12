#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool method1(string str1,string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1==str2)
    return true;
    else
    return false;
}
bool method2(string str1,string str2){
    map<int,char> map1,map2;
    for(int i=0;i<str1.length();i++)
        map1[str1[i]]=str1[i];
    for(int i=0;i<str2.length();i++)
        map2[str2[i]]=str2[i];
    if(map1==map2)
    return true;
    else
    return false;
}
int main()
{
    string str1,str2;
    cout<<"Enter the 1st String"<<endl;
    getline(cin,str1);
    cout<<"Enter the 2nd String"<<endl;
    getline(cin,str2);
    if(method2(str1,str2))
    cout<<"Both Strings are Anagram"<<endl;
    else
    cout<<"Strings are not Anagram"<<endl;
    return 0;
}
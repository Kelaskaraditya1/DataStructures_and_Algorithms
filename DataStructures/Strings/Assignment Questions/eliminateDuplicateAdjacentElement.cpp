#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string noDuplicate(string str)
{
    string string="";
    for(int i=0;i<str.length();i++)
    {
        if(string.back()!=str[i])
        string.push_back(str[i]);
        else
        string.pop_back();
    }
    return string;
}
int main()
{
    string string;
    cout<<"Enter your String"<<endl;
    getline(cin,string);
    cout<<"After eliminating duplicate elements: "<<noDuplicate(string)<<endl;
    cout<<string.front()<<endl;
    return 0;
}
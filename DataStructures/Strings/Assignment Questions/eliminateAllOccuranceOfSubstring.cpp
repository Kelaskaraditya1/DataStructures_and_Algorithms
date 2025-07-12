#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string eliminateAllOccurence(string str1,string str2)
{
    while(str1.find(str2)!=string::npos)
    {
        int index=str1.find(str2);
        str1.erase(index,str2.length());
    }
    return str1;
}
int main()
{
    string string1,string2;
    cout<<"Enter the 1st String"<<endl;
    cin>>string1;
    cout<<"Enter the substring"<<endl;
    cin>>string2;
    cout<<"The final string is:"<<eliminateAllOccurence(string1,string2)<<endl;
    return 0;
}
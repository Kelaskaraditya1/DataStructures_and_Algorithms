#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void printCharecters(string string)
{
    int index=0;
    while(string[index]!='\0')
    cout<<string[index++]<<" ";
}
int main()
{
    // decleration
    // string string;
    cout<<"Enter your string" <<endl;

    // input
    // cin>>string;
    // getline(cin,string);
     
    // output
    // cout<<string<<endl;
    // printCharecters(string);

    // utility functions:

    // 1) Length of String
    // cout<<"The length of the string is:"<<string.length();

    // 2) empty or not:
    // cout<<"The string is "<<string.empty()<<endl;

    // 3) append 2 Strings:

    // string string1,string2;
    // getline(cin,string1);
    // getline(cin,string2);
    // cout<<"After appendeing:"<<string1.append(string2)<<endl;

    // 4) Earase function:

    // string string;
    // getline(cin,string);
    // string.erase(2,2);
    // cout<<string<<endl;

    // 5) insert into a string

    // string string1,string2;
    // getline(cin,string1);
    // getline(cin,string2);
    // string1.insert(3,string2);
    // cout<<"After inserting: "<<string1<<endl;

    // 6) finding one string in another 

    // string string1,string2;
    // getline(cin,string1);
    // getline(cin,string2);
    // if(string1.find(string2)!=string::npos)
    // cout<<"String found";
    // else
    // cout<<"String not found";

    // 7) compare operator:

    // string string1,string2;
    // getline(cin,string1);
    // getline(cin,string2);
    // if(string1.compare(string2)==0)
    // cout<<"Strings are equal"<<endl;
    // else
    // cout<<"Strings are not equale"<<endl;

    // 8) substring
    string string1,string2;
    getline(cin,string1);
    string2=string1.substr(5,7);
    cout<<"The substring is: "<<string2<<endl;
    return 0;
}
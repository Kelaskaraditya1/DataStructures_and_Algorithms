#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string reverseString(string str){
    char array1[100];
    string finalString;
    for(int i=0;i<str.length();i++)
    array1[i]=str[i];
    int low=0,high=str.length()-1;
    while(low<high){
        if((isalpha(str[low])!=0)&&(isalpha(str[high])!=0))
        swap(array1[low++],array1[high--]);
        else{
            if(isalpha(str[low])!=0){
                array1[low]=str[low];
            low++;
            }
            else{
                array1[high]=str[high];
                high--;
            }
        }
    }
    for(int i=0;i<str.length();i++)
    finalString.push_back(array1[i]);
    return finalString;
}
int main()
{
    string str;
    cout<<"Enter the String"<<endl;
    getline(cin,str);
    string finalString=reverseString(str);
    cout<<"After reversing the String:"<<finalString<<endl;
    return 0;
}
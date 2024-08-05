#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void removeChar(string &string,char it){
if(string.find(it)!=string::npos){
    int index=string.find(it);
    string.erase(index);
}
}
string arrangeOrderWise(string str1,string str2){
    string ans;
    int no1=str1.length(),no2=str2.length();
    int leng=min(no1,no2),i=0;
    while(i<leng){
        char it = str1[i];
        if(str2.find(it)!=string::npos){
            ans.push_back(it);
            removeChar(str2,it);
        }
        i++;
    }
    int j=0;
    if(str2.length()>0){
    while(j<str2.length())
    ans.push_back(str2[j++]);
    }
    return ans;
}
int main()
{
    string str1="cbafg",str2="abcd";
    cout<<"After arranging the string:"<<arrangeOrderWise(str1,str2);
    return 0;
}
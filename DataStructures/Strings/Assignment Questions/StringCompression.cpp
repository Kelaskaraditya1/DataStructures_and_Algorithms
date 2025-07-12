#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void stringCompression(string &str){
    char prev=str[0];
    int count=1,index=0;
    for(int i=1;i<str.length();i++){
        if(prev==str[i]){
            prev=str[i];
            count++;
        }
        else{
            str[index++]=prev;
            if(count>1){
                int start=index;
                while(count!=0){
                    str[index++]=(count%10)+'0';
                    count=count/10;
                }
                reverse(str.begin()+start,str.begin()+index);
            }
            count=1;
            prev=str[i];
        }
    }
            str[index++]=prev;
            if(count>1){
                int start=index;
                while(count!=0){
                    str[index++]=(count%10)+'0';
                    count=count/10;
                }
                reverse(str.begin()+start,str.begin()+index);
            }
} 
int main()
{
    string str;
    getline(cin,str);
    stringCompression(str);
    cout<<str;
    return 0;
}
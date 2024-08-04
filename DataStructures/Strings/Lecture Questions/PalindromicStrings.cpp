#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int expand(string str,int low,int high){
    int count=0;
    while(str[low]==str[high]&&(low>=0&&high<str.length())){
        count++;
        low--,high++;
    }
    return count;
}
int totalCount(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        int oddCount=expand(str,i,i);
        int evenCount=expand(str,i,i+1);
        count=count+oddCount+evenCount;
    }
    return count;
}
int main()
{
    string str;
    cout<<"Enter the String"<<endl;
    getline(cin,str);
    cout<<"The total count of odd and even strings is:"<<totalCount(str);
    return 0;
}
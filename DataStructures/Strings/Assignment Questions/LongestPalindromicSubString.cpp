#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPlaindrome(string &str,int low,int high){
    while(low<high){
        if(str[low++]!=str[high--])
        return false;
    }
    return true;
}
string longestValidPalindromeString(string str){
    string ans;
    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            if(isPlaindrome(str,i,j))
            {
                if(ans.length()<(i-j+1))
                ans=str.substr(i,j-i+1);
            }
        }
    }
    return ans;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<"Longest Palindromic Substring is:"<<longestValidPalindromeString(str);
    return 0;
}
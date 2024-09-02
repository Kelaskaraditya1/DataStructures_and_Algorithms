#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool vowels(char ch){
    char array[]={'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        if(ch==array[i])
        return true;
    }
    return false;
}
string reverseVowels(string str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(vowels(str[low])&&vowels(str[high]))
        swap(str[low++],str[high--]);
        else if(!vowels(str[low]))
        low++;
        else
        high--;
    }
    return str;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<"After reversing only vowels:"<<reverseVowels(str);
    return 0;
}
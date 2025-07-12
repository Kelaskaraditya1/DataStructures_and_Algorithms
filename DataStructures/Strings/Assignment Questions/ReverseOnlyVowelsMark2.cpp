#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isVowel(char ch){
    char vowels[]={'a','e','i','o','u'};
    for(auto it:vowels){
        if(it==ch)
        return true;
    }
    return false;
}
void reverseOnlyVowels(string &str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(isVowel(str[low])&&isVowel(str[high]))
        swap(str[low++],str[high--]);
        else if(!isVowel(str[low]))
        low++;
        else 
        high--;
    }
}
int main()
{
    string str;
    getline(cin,str);
    reverseOnlyVowels(str);
    cout<<"After reversing only vowels:"<<str;
    return 0;
}
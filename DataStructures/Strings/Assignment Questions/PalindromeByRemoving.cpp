#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPalindrome(string str)
{
    int low=0,high=str.length()-1;
    while (low<=high)
    {
      if(str[low++]!=str[high--])
      return false;  
    }
    return true;
}
bool eliminatePalindrome(string str)
{
    int low=0,high=str.length()-1;
    while(low<=high)
    {
        if(str[low]==str[high])
        low++,high--;
        else{
            string str1=str.substr(low+1,high-low);
            string str2=str.substr(low,high-low);
            if(isPalindrome(str1)||isPalindrome(str2))
            return true;
            else
            low++,high--;
        }
    }
    return false;
}
int main()
{
    string str;
    cout<<"Enter the String"<<endl;
    getline(cin,str);
    if(eliminatePalindrome(str))
    cout<<"can be Palindrome"<<endl;
    else
    cout<<"Cannot be Palindrome"<<endl;
    return 0;
}
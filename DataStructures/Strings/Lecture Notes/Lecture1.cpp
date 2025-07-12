#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int getLength(char string[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(string[i]!='\0')
        count++;
        else
        break;
    }
    return count;
}
 void reverseString(char string[])
{
    int low=0,high=strlen(string)-1;
    while(low<high)
    swap(string[low++],string[high--]);
}
void toUpperCase(char string[])
{
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]>='a'&&string[i]<='z')
        string[i]=string[i]-'a'+'A';
    }
}
void replaceAt(char string[])
{
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='@')
        string[i]=' ';
    }
}
bool palindrome(char string[])
{
    bool status=true;
    int low=0,high=strlen(string)-1;
    while(low<high)
    {
        if(string[low++]!=string[high--])
        {
            status=false;
            break;
        }
    }
    return status;
}

int main()
{
    // decleration 
    char string[100];
    cout<<"Enter your String"<<endl;

    // Input
    cin.getline(string,100);

    // Output
    // cout<<string<<endl;

    // Indivisual charecters

    // cout<<"Your String is:";
    // for(int i=0;i<100;i++)
    // {
    //     if(string[i]!='\0')
    //     cout<<string[i];
    //     else
    //     break;
    // }

    // for taking entire sentence as an input.

    // cin.getline(string,100);
    cout<<string<<endl;

    // length of String:

    // cout<<"The Length of the String is:"<<getLength(string,100)<<endl;
    // cout<<"The Length of the String si:"<<strlen(string)<<endl;

    // reverse of String:

    // reverseString(string);
    // cout<<"The reverse of the String is:"<<string<<endl;

    // converting to upper case

    // toUpperCase(string);
    // cout<<"The upper case of the String is:"<<string<<endl;

    // replaceAt(string);
    // cout<<"After replacing @"<<string<<endl;

    //Palinrome or not:

    if(palindrome(string))
    cout<<"String "<<string<<" is palindrome"<<endl;
    else
    cout<<"String "<<string<<" is not a palindrome"<<endl;
    return 0;
}


#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int stringToInteger(string str){
    int ans=0,sign=1,i=0;
    while(i<str.length()&&str[i]=='_')
    i++;
    if(str[i]=='-'){
            sign=-1;
            i++;
    }
    while(i<str.length()&&isdigit(str[i])){
        if(ans>(INT_MAX/10)&&((ans==INT_MAX)&&(isdigit(str[i])>7)))
        {
            if(sign==-1)
            return INT_MIN;
            else
            return INT_MAX;
        }
        ans=(ans*10)+str[i++]-'0';
    }
    return ans*sign;
}
int main()
{
    string num;
    getline(cin,num);
    cout<<"The number for the corrosponding String is:"<<stringToInteger(num);
    return 0;
}
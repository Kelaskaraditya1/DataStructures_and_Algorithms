#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string integerToRoman(int num){
    string ans;
    string cahrecters[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    for(int i=0;i<13;i++){
        while(num>=values[i]){
            ans.append(cahrecters[i]);
            num=num-values[i];
        }
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    cout<<integerToRoman(num)<<endl;
    return 0;
}
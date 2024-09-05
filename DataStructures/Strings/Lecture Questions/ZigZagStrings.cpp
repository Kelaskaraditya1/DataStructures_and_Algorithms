#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<string> zigzagString(string str,int numRows){
    vector<string> zigzagPattern(numRows);
    int i=0,row=0,direction=1;
    while(true){
        if(direction==1){
            while(i<str.length()&&row<numRows)
            zigzagPattern[row++].push_back(str[i++]);
            row=row-2;
            direction=-1;
        }
        else{
            while(i<str.length()&&row>=0)
            zigzagPattern[row--].push_back(str[i++]);
            row=1;
            direction=1;
        }
        if(i>str.length())
        break;
    }
    return zigzagPattern;
}
int main()
{
    string str,ans;
    int rows;
    getline(cin,str);
    vector<string> zigzagPattern=zigzagString(str,3);
    for(auto str:zigzagPattern)
    cout<<str<<" ";
    // cout<<"The zig zag pattern string is:"<<ans<<endl;
    return 0;
}
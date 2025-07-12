#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<vector<string>> method1(vector<string> array){
    map<string,vector<string>> map;
    vector<vector<string>> ans;
    for(auto str : array){
        string str1=str;
        sort(str.begin(),str.end());
        map[str].push_back(str1);
    }
    for(auto it:map)
        ans.push_back(it.second);
    return ans;
}
int main()
{
    vector<string> vec={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans=method1(vec);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    } 

    return 0;
}
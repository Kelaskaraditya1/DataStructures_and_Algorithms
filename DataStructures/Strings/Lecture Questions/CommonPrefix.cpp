#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string commonPrefis(vector<string> arr){
    int i=0;
    string ans;
    while(true){
        char current_ch=0;
        for(auto str:arr){
            if(current_ch==0)
            current_ch=str[i];
            else if(current_ch!=str[i]){
                current_ch=0;
                break;
            }
            if(i>str.length()){
                current_ch=0;
                break;
            }
        }
        if(current_ch==0)
        break;
        ans.push_back(current_ch);
        i++;
    }
    return ans;
}

int main()
{
    int no;
    cin>>no;
    vector<string> array(no);
    for(int i=0;i<no;i++)
    cin>>array[i];
    cout<<"The Common prefix for all the Strings in the vector is:"<<commonPrefis(array);
    return 0;
}
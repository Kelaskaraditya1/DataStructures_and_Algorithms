#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    //initialization
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> a(rows,vector<int>(cols,0));
    // initialization with a single value.
    vector<vector<int>> b(rows,vector<int> (cols));
    //input
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cin>>b[i][j];
    }
    //output
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cout<<b[i][j]<<" ";
        cout<<endl;
    } 
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> wavePattern(vector<vector<int>> array)
{
    int rows=array.size(),cols=array[0].size();
    vector<int> resultant;
    for(int i=0;i<cols;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<rows;j++)
            resultant.push_back(array[j][i]);
        }
        else
        {
            for(int j=rows-1;j>=0;j--)
            resultant.push_back(array[j][i]);
        }
    }
    return resultant;
}
int main()
{
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> array(rows,vector<int> (cols));
    vector<int> resultant;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cin>>array[i][j];
    }
    resultant=wavePattern(array);
    for(int i=0;i<resultant.size();i++)
    {
        cout<<resultant[i]<<" ";
    }
    return 0;
}
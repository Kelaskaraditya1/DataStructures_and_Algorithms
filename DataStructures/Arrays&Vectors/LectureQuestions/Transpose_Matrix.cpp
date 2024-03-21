#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void transposeMatrix(vector<vector<int>> &array)
{
    int row=array.size(),cols=array[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i+1;j++) 
        {
            int tmp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=tmp;
        }
    }
}
int main()
{
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> array(rows,vector<int> (cols));
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cin>>array[i][j];
    }
    transposeMatrix(array);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cout<<array[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
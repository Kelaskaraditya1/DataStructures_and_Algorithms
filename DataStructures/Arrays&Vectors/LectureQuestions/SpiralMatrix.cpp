#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> array)
{
    vector<int> resultant;
    int k=0,start_row=0,start_col=0,end_row=array.size()-1,end_col=array[0].size()-1;
    while(k<(array.size()*array[0].size()))
    {
        for(int i=start_col;i<=end_col;i++)
        {
            cout<<array[start_row][i]<<" ";
            resultant.push_back(array[start_row][i]);
            k++;
        }
        start_row++;
        for(int i=start_row;i<=end_row;i++)
        {
            cout<<array[i][end_col]<<" ";
            resultant.push_back(array[i][end_col]);
            k++;
        }
        end_col--;
        for(int i=end_col;i>=start_col;i--)
        {
            cout<<array[end_row][i]<<" ";
            resultant.push_back(array[end_row][i]);
            k++;
        }
        end_row--;
        for(int i=end_row;i>=start_row;i--)
        {
            cout<<array[i][start_col]<<" ";
            resultant.push_back(array[i][start_col]);
            k++;
        }
        start_col++;
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
    cout<<"After Spiral Printing"<<endl;
    resultant=spiralMatrix(array);
    for(int i=0;i<resultant.size();i++)
    cout<<resultant[i]<<" ";
    return 0;
}
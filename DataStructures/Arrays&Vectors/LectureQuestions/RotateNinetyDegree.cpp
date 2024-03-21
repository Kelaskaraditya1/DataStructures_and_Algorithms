#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void ninetyDegree(vector<vector<int>> &array)
{
    //Transpose
    int rows=array.size(),cols=array[0].size();
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            int tmp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=tmp;
        }
    }
    // rotating
    int l=0,h=array.size()-1;
    while(l<h)
    {
        for(int j=0;j<array.size();j++)
        swap(array[j][l],array[j][h]);
        l++,h--;
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
    cout<<"After rotating 90 degree"<<endl;
    ninetyDegree(array);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cout<<array[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
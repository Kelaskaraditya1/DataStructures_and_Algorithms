#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool binarySearch(vector<vector<int>> array,int target)
{
    int rows=array.size(),cols=array[0].size(),low=0,high=(rows*cols)-1;
    while(low<=high)
    {
        int mid=(low+high)/2,matrix_row=mid/cols,matrix_cols=mid%cols;
        if(array[matrix_row][matrix_cols]==target)
        return true;
        else if(array[matrix_row][matrix_cols]<target)
        low=mid+1;
        else 
        high=mid-1;
    }
    return false;
}
int main()
{
    int rows,cols,target;
    cin>>rows>>cols>>target;
    vector<vector<int>> array(rows,vector<int>(cols));
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cin>>array[i][j];
    }
    if(binarySearch(array,target))
    cout<<"Key is present"<<endl;
    else
    cout<<"Key is not present"<<endl;
    return 0;
}
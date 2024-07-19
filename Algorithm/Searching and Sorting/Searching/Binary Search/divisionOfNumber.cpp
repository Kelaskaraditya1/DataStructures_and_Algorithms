#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int divide(int dividend,int divisor)
{
    int low=1,high=dividend,ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*divisor<=dividend)
        {
            ans=mid;
            low=mid+1;
        }
        else
        high=mid-1;
    }
    return ans;
}
int main()
{
    int dividend,divisor;
    cin>>dividend>>divisor;
    cout<<divide(dividend,divisor);
    return 0;
}
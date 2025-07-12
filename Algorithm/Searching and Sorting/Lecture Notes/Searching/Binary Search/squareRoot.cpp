#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
float squareRoot(int square)
{
    int low=1,high=square;
    float ans=1.0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((mid*mid)>square)
        high=mid-1;
        else{
            ans=mid;
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    int no;
    cin>>no;
    cout<<"The square root is: "<<squareRoot(no);
    return 0;
}
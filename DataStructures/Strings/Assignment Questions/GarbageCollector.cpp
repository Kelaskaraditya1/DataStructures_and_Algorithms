#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int totalTime(vector<string> garbage,vector<int> time){
    int pickGlass=0,pickMetal=0,pickPlastic=0,endGlass=0,endPlastic=0,endMetal=0,timeGlass=0,timeMetal=0,timePlastic=0;
    for(int i=0;i<garbage.size();i++){
        string gar=garbage[i];
        for(int j=0;j<gar.length();j++){
            char type=gar[j];
            if(type=='G'){
                pickGlass++;
                endGlass=i;
            }
            else if(type=='M'){
                pickMetal++;
                endMetal=i;
            }
            else{
                pickPlastic++;
                endPlastic=i;
            }
        }
    }
    for(int i=0;i<endGlass;i++)
    timeGlass+=time[i];
        for(int i=0;i<endPlastic;i++)
    timePlastic+=time[i];
        for(int i=0;i<endMetal;i++)
    timeMetal+=time[i];
    return ((pickGlass+timeGlass)+(pickMetal+timeMetal)+(pickPlastic+timePlastic));
}
int main()
{
    vector<string> garbage={"G","p","GP","GG"};
    vector<int> time={2,4,3};
    cout<<totalTime(garbage,time)<<endl;
    return 0;
}
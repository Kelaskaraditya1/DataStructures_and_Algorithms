#include<bits/stdc++.h>
using namespace std;

int factorial(int no){
    if(no==0 || no==1)
        return 1;
    return no*factorial(no-1);
}

void printCounting(int no){

    if(no==1){
        cout<<no<<" ";
        return;
    }

    // Tail recusrsion: where we go till base case first than processing begins.

    printCounting(no-1);
    cout<<no<<" ";

    // Head case : where processing happenes within the current iteration.

    // cout<<no<<" ";
    // printCounting(no-1); 
    
}

int powerOf2(int no){

    if(no==0)
        return 1;

    else if(no==1)
        return 2;

    int ans = 2*powerOf2(no-1);
    return ans;

}

int fibonacciTerm(int no){
    if(no==1)
        return 0;

    else if(no==2)
        return 1;

     return fibonacciTerm(no-1)+fibonacciTerm(no-2);
}

int main(){
    cout<<"I am Ironman"<<endl;

    // cout<<factorial(7)<<endl;

    // printCounting(10);

    // cout<<powerOf2(5)<<endl;

    cout<<fibonacciTerm(9);

    return 0;
}
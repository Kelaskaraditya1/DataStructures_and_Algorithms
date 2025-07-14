#include<bits/stdc++.h>
using namespace std;

void solve(int arr[]){
    *arr=*arr+1;
}

void callByValue(int *ptr){
// ptr=ptr+1;
ptr++;
}

void callByRefrence(int* &ptr){
    // ptr=ptr+1;
    ptr++;
}

int main(){
    cout<<"I am Ironman"<<endl;

        // Dynamic memory allocation.

    // char array[]={'a','d','i','t','y','a'};
    // char *cptr = array;
    // cout<<*cptr;

    /*Array of Pointers:it contains an array which contains address of each element like arr[0]=&nums[0] 
    and for accessing the element *arr[0], *arr[0]->nums[0]->0th element
    */ 

    // int arr[]={1,2,3,4,5,6,7,8,9,10};

    // int *(ptrToArray[100]);

    // for(int i=0;i<10;i++)
    //     ptrToArray[i]=&arr[i];

    // for(int i=0;i<10;i++)
    //     cout<<*ptrToArray[i]<<" ";

    // for(int val:arr)
    //     cout<<val<<" ";

    // cout<<endl;

    // solve(arr);

    //     for(int val:arr)
    //     cout<<val<<" ";

    int a = 100;

    int *ptr=&a;

    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    callByValue(ptr);

    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;



    return 0;
}
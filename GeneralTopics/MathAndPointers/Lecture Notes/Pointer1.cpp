#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"I am Ironman"<<endl;

    // initialization: pointer to var

    /* add as many * as per number of pointer var if there are 2 pointer var
    ptr->a and ptr2->ptr
    than while declaring:

    int a=10;
    int *ptr=&a;
    int **ptr2=&ptr;

    */


    // int a = 10;
    // int *ptr = &a;

    // cout<<"ptr prints the address of the variable a: "<<ptr<<endl;
    // cout<<"The value at the address stored is: "<<*ptr<<endl;

    // pointer to pointer:

    // int b = 20;
    // int *ptr = &b;
    // int **ptrToPtr = &ptr;

    // cout<<"Address of b "<<&b<<endl;
    // cout<<"Address of pointer var "<<&ptr<<endl;
    // cout<<"Address of pointer to pointer var "<<&ptrToPtr<<endl;

    // cout<<endl;

    // cout<<"The value of b is:"<<b<<endl;
    // cout<<"The address of b is:"<<&b<<endl;
    // cout<<"The value of ptr var:"<<ptr<<endl;
    // cout<<"The address of ptr is:"<<&ptr<<endl;
    // cout<<"Derefrencing ptr pointer value: "<<*ptr<<endl;
    // cout<<"The value of ptrToPtr is:"<<*ptrToPtr<<endl;
    // cout<<"The address of ptrToPtr is:"<<&ptrToPtr<<endl;
    // cout << "Dereferencing ptrToPtr to get value of b: " << *(*ptrToPtr) << endl;

    // int a=10;
    // int *ptr=&a;
    // *ptr=*ptr+1;
    // cout<<a<<endl;

    // Pointer to Char Array

    // char array []="Aditya";
    // char *ptr = array;
    // cout<<array<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr;

    // Dynamic memory allocation.

    // char array[]={'a','d','i','t','y','a'};
    // char *cptr = array;
    // cout<<*cptr;

    /*Array of Pointers:it contains an array which contains address of each element like arr[0]=&nums[0] 
    and for accessing the element *arr[0], *arr[0]->nums[0]->0th element
    */ 

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int *(ptrToArray[100]);

    for(int i=0;i<10;i++)
        ptrToArray[i]=&arr[i];

    for(int i=0;i<10;i++)
        cout<<*ptrToArray[i]<<" ";



    return 0;
}
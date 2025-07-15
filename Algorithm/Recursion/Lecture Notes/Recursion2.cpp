#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    return climbStairs(n-1)+climbStairs(n-2);
}

void printArray(int arr[],int index, int size){

    if(index>=size)
        return ;

    printArray(arr,index+1,size);
    cout<<arr[index]<<" ";
}

bool searchElement(int arr[],int size,int key,int index){

    if(index>=size)
        return false;

    if(arr[index]!=key)
        return searchElement(arr,size,key,index+1);
    else
        return true;

}

int minimumNumber(int arr[],int size,int minNo,int index){

    if(index>=size)
        return minNo;

    if(arr[index]<minNo)
        minNo=arr[index];

    return minimumNumber(arr,size,minNo,index+1);
    
}

void insertEven(int arr[],vector<int> &even,int index,int size){

    if(index>=size)
        return;

    if((arr[index]&1)==0)
        even.push_back(arr[index]);

    insertEven(arr,even,index+1,size);

}

void doubleElement(int arr[],int index,int size){
    if(index>=size)
        return;
    
    arr[index]*=2;
    doubleElement(arr,index+1,size);
}

int maximumElement(int arr[],int index,int size,int maxNo){

    if(index>=size)
        return maxNo;
    
    if(arr[index]>maxNo)
        maxNo=arr[index];
    
    maximumElement(arr,index+1,size,maxNo);
}

int findByIndex(int arr[],int index,int size,int key){

    if(index>=size)
        return -1;

    if(arr[index]==key)
        return index;

    return findByIndex(arr,index+1,size,key);

}

void printAllOccurances(int arr[],int index,int size,int key){

    if(index>=size)
        return;
    
    if(arr[index]==key)
        cout<<index<<" ";

    printAllOccurances(arr,index+1,size,key);
}

void countDigits(int no,vector<int> &digits){

    if(no==0)
        return;
        
    countDigits(no/10,digits);
    digits.push_back(no%10);
}

int formDigit(vector<int> &digitArray,int no,int index){

    if(index>=digitArray.size())
        return no;
    
    no=(no*10)+digitArray[index];

    return formDigit(digitArray,no,index+1);

}

int main(){
    cout<<"I am Ironman"<<endl;

    // cout<<climbStairs(45)<<endl;

    // int arr[]={10,20,30,40,50,60,70,80,90,100};

    int arr[]={30,20,40,60,10,2,35,60};

    // printArray(arr,0,10);

    // if(searchElement(arr,10,120,0))
    //     cout<<"Element is present in the array"<<endl;
    // else
    //     cout<<"Element is not present in the array"<<endl;

    // cout<<"minimum element: "<<minimumNumber(arr,10,INT_MAX,0)<<endl;

    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    // vector<int> evens;

    // insertEven(arr1,evens,0,10);

    // for(auto it:evens)
    //     cout<<it<<" ";
    // cout<<endl;

    // doubleElement(arr,0,10);

    // for(auto it:arr)
    //     cout<<it<<" ";
    // cout<<endl;

    // cout<<maximumElement(arr,0,8,INT_MIN)<<endl;

    // cout<<findByIndex(arr,0,8,160)<<endl;

    // printAllOccurances(arr,0,8,60);

    // vector<int> digits;
    //  countDigits(521,digits);

    //  for(auto it:digits)
    //     cout<<it<<" ";

    vector<int> digit = {5,2,1};

    int no=0;

    cout<<"The number is: "<<formDigit(digit,no,0);

    return 0;
}
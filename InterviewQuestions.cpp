#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool linearSearch(vector<int> array,int target){
    for(int i=0;i<array.size();i++){
        if(array[i]==target)
        return true;
    }
    return false;
}
bool binarySearch(vector<int> array,int target){
    int low=0,high=array.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(array[mid]==target)
        return true;
        else if(array[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    return false;
}
void bubbleSort(vector<int> &array){
    for(int i=0;i<array.size();i++){
        for(int j=i;j<array.size();j++){
            if(array[i]>array[j])
            swap(array[i],array[j]);
        }
    }
}

// go on finding the minimum index and swap it with the i'th index

void selectionSort(vector<int> &array){
    for(int i=0;i<array.size()-1;i++){
        int min=i;
        for(int j=i;j<array.size();j++){
            if(array[j]<array[min])
            min=j;
        }
        swap(array[min],array[i]);
    }
}

// get the element to the correct position go on swaping j and j-1

void insertionSort(vector<int> &array){
    for(int i=0;i<array.size();i++){
        int j=i;
        while(j>0&&array[j]<array[j-1]){
            swap(array[j],array[j-1]);
            j--;
        }
    }
}

void printArray(vector<int> &array){
    for(auto it:array)
    cout<<it<<" ";
}
int main()
{

    // Searching algorithm Linear and Binary Search

    // vector<int> arr={10,20,30,40,50,60,70,80,90,100};
    // int target;
    // cin>>target;
    // if(binarySearch(arr,target))
    // cout<<"Key is present"<<endl;
    // else
    // cout<<"Key is absent"<<endl;


    // Sorting 

    vector<int> array={20,50,30,10,60,90,100,40};
    // bubbleSort(array);
    // insertionSort(array);
    selectionSort(array);
    printArray(array);
    return 0;
}
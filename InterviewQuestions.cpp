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


// Merge Sort 

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low,right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right])
        temp.push_back(arr[left++]);
        else
        temp.push_back(arr[right++]);
    }
    while(left<=mid)
    temp.push_back(arr[left++]);
    while(right<=high)
    temp.push_back(arr[right++]);
    for(int i=low;i<=high;i++)
    arr[i]=temp[i-low];
}
void mergeSort(vector<int> &arr,int low,int high){
    if(low>=high)
    return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


// Quick Sort

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j) {
        while (i <= high && arr[i] <= pivot)
            i++;
        while (j >= low && arr[j] > pivot)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);  // Correctly place pivot at its correct position
    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);  // Sort left side of pivot
        quickSort(arr, partitionIndex + 1, high);  // Sort right side of pivot
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
    quickSort(array,0,array.size()-1);
    // mergeSort(array,0,array.size()-1);
    printArray(array);
    return 0;
}
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

// infix , prefix , postfix conversions.

// Infix to postfix.priority wala concept.

  int priority(char ch){
      if(ch=='^')
      return 3;
      else if(ch=='+'||ch=='-')
      return 1;
      else if(ch=='*'|| ch=='/')
      return 2;
      return 0;
  }
    string infixToPostfix(string str){
        int i=0;
        stack<char> stack;
        string postfix="";
        while(i<str.length()){
             if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
            postfix.push_back(str[i]);
            else if(str[i]=='(')
            stack.push(str[i]);
            else if(str[i]==')'){
                while(!stack.empty()&&stack.top()!='('){
                    postfix.push_back(stack.top());
                    stack.pop();
                }
                stack.pop();
            }
            else {
                if(!stack.empty()&&priority(str[i])<=priority(stack.top())){
                    postfix.push_back(stack.top());
                    stack.pop();
                }
                stack.push(str[i]);
            }
            i++;
        }
                while(!stack.empty()){
            postfix.push_back(stack.top());
            stack.pop();
        }
        return postfix;
    }

    // indfix to prefix.
    /*
    1) reverse the infix expression change (->) and )->(
    2) convert to postfix in controlled env i.e prio(str[i])<prio(stack.top())
        and if(str[i]=='^)
        prio(stack.top()>=str[i])
    3) reverse the statement.
    */
   string reverse(string &str){
    int low=0,high=str.length()-1;
    while(low<=high){
        if(str[low]=='('&&str[high]==')')
        low++,high--;
        swap(str[low++],str[high--]);
    }
   }
   string infixToPrefix(string str){
    reverse(str);
    int i=0;
    stack<char> stack;
    string prefix="";
    while(i<str.length()){
             if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
            prefix.push_back(str[i]);
            else if(str[i]=='(')
            stack.push(str[i]);
            else if(str[i]==')'){
                while(!stack.empty()&&stack.top()!='('){
                    prefix.push_back(stack.top());
                    stack.pop();
                }
                stack.pop();
            }
            else{
                if(str[i]=='^'){
                    if(!stack.empty()&&priority(stack.top())>=priority(str[i])){
                        prefix.push_back(stack.top());
                        stack.pop();
                    }
                }
                else{
                        if(priority(str[i])<stack.top()&&!stack.empty()){
                            prefix.push_back(stack.top());
                            stack.pop();
                        }
                    }
                    stack.push(str[i]); 
            }  
            i++;  
        }
        while(!stack.empty()){
            prefix.push_back(stack.top());
            stack.pop();
        }
        reverse(prefix);
        return prefix;
   }
   string decodeMessage(string str,int length){
    if(length==0)
    return NULL;
    int i=0;
    string ans;
    while(i<str.length()){
        if(isdigit(str[i])){
            int num=str[i]-'0';
            char ch = 65+num-1;
            ans.push_back(ch);
            i++;
        }
        else if(str[i]=='_'){
            ans.push_back(' ');
            i++;
        }
                else if(str[i]=='#'){
            int start=i+1,j=i+1;
            while(j<str.length()&&str[j]!='#')
            j++;
            string subStr=str.substr(start,j-start);
            ans.append(subStr);
            i=j;
        }
        else{
            ans.push_back(str[i]);
            i++;
        }
    }
    return ans;
   }
   void moveToFront(string &str){
    // int count=0;
    // string str1="";
    // string finalStr="";
    // for(int i=0;i<str.length();i++){
    //     if(str[i]=='#')
    //     count++;
    //     else
    //     str1.push_back(str[i]);
    // }
    // while(count!=0){
    //     finalStr.push_back('#');
    //     count--;
    // }
    // finalStr.append(str1);
    // str=finalStr;

    int i=str.length()-1;
    while(str[i]!='#')
    i--;
    int j=i-1;
    while(j>=0){
        if(str[j]!='#')
        swap(str[j--],str[i--]);
        else
        j--;
    }
   }
   string compresssionString(string str){
    map<char,int> map;
    string ans;


    // for(int i=0;i<str.length();i++)
    // map[str[i]]++;
    // for(auto it:map){
    //     ans.push_back(it.first);
    //     ans.append(to_string(it.second));
    // }

    int count=0;
    char ch;
    for(int i=0;i<str.length();i++){
        if(count==0){
            ch=str[i];
            count=2;
        }
        else if(ch==str[i])
        count++;
        else{
            ans.push_back(ch);
            ans.append(to_string(count));
            count=0;
        }
    }
    return ans;
   }

   void spiralPattern(vector<vector<int>> arr){
    int rs=0,cs=0,re=arr.size()-1,ce=arr[0].size()-1,k=0;
    while(k<arr.size()*arr[0].size()){
        for(int i=cs;i<=ce;i++){
            cout<<arr[rs][i]<<" ";
            k++;
        }
        rs++;
        for(int i=rs;i<=re;i++){
            cout<<arr[i][ce]<<" ";
            k++;
        }
        ce--;
        for(int i=ce;i>=cs;i--){
            cout<<arr[re][i]<<" ";
            k++;
        }
        re--;
        for(int i=re;i>=rs;i--){
            cout<<arr[i][cs]<<" ";
            k++;
        }
        cs++;
    }
   }

   float equation(float a,float b){
    return pow(a,3)+pow(a,2*b)+pow(2*a,2*b)+pow(2*a*b,2)+pow(a*b,2)+pow(b,3);
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

    // vector<int> array={20,50,30,10,60,90,100,40};
    // bubbleSort(array);
    // insertionSort(array);
    // quickSort(array,0,array.size()-1);
    // mergeSort(array,0,array.size()-1);
    // printArray(array);

    // infix,postfix,prefix conversions.

    // 1) infix to postfix

    // string infix1="a+b*(c^d-e)^(f+g*h)-i";
    // string infix2="A*(B+C)/D";
    // cout<<infixToPostfix(infix1)<<endl;
    // cout<<infixToPostfix(infix2);

    // 2) infix to prefix
    // string infix3="*-A/BC-/AKL";
    // cout<<infixToPrefix(infix3);

    // cout<<decodeMessage("1 2 3 . # 1 # 2 # 3");
    // string str="move#hash#to#front";
    // moveToFront(str);
    // cout<<str;

    // string comp="aabbbbeeeeffggg";
    // cout<<compresssionString(comp);

    // vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    // spiralPattern(arr);


    cout<<equation(1,2);
    return 0;
}
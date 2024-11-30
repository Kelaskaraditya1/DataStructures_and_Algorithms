#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// bool linearSearch(vector<int> array,int target){
//     for(int i=0;i<array.size();i++){
//         if(array[i]==target)
//         return true;
//     }
//     return false;
// }
// bool binarySearch(vector<int> array,int target){
//     int low=0,high=array.size()-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(array[mid]==target)
//         return true;
//         else if(array[mid]<target)
//         low=mid+1;
//         else
//         high=mid-1;
//     }
//     return false;
// }
// void bubbleSort(vector<int> &array){
//     for(int i=0;i<array.size();i++){
//         for(int j=i;j<array.size();j++){
//             if(array[i]>array[j])
//             swap(array[i],array[j]);
//         }
//     }
// }

// // go on finding the minimum index and swap it with the i'th index

// void selectionSort(vector<int> &array){
//     for(int i=0;i<array.size()-1;i++){
//         int min=i;
//         for(int j=i;j<array.size();j++){
//             if(array[j]<array[min])
//             min=j;
//         }
//         swap(array[min],array[i]);
//     }
// }

// // get the element to the correct position go on swaping j and j-1

// void insertionSort(vector<int> &array){
//     for(int i=0;i<array.size();i++){
//         int j=i;
//         while(j>0&&array[j]<array[j-1]){
//             swap(array[j],array[j-1]);
//             j--;
//         }
//     }
// }


// // Merge Sort 

// void merge(vector<int> &arr,int low,int mid,int high){
//     vector<int> temp;
//     int left=low,right=mid+1;
//     while(left<=mid&&right<=high){
//         if(arr[left]<=arr[right])
//         temp.push_back(arr[left++]);
//         else
//         temp.push_back(arr[right++]);
//     }
//     while(left<=mid)
//     temp.push_back(arr[left++]);
//     while(right<=high)
//     temp.push_back(arr[right++]);
//     for(int i=low;i<=high;i++)
//     arr[i]=temp[i-low];
// }
// void mergeSort(vector<int> &arr,int low,int high){
//     if(low>=high)
//     return;
//     int mid=(low+high)/2;
//     mergeSort(arr,low,mid);
//     mergeSort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }


// // Quick Sort

// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[low];
//     int i = low, j = high;
//     while (i < j) {
//         while (i <= high && arr[i] <= pivot)
//             i++;
//         while (j >= low && arr[j] > pivot)
//             j--;
//         if (i < j)
//             swap(arr[i], arr[j]);
//     }
//     swap(arr[low], arr[j]);  // Correctly place pivot at its correct position
//     return j;
// }

// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int partitionIndex = partition(arr, low, high);
//         quickSort(arr, low, partitionIndex - 1);  // Sort left side of pivot
//         quickSort(arr, partitionIndex + 1, high);  // Sort right side of pivot
//     }
// }

// void printArray(vector<int> &array){
//     for(auto it:array)
//     cout<<it<<" ";
// }

// // infix , prefix , postfix conversions.

// // Infix to postfix.priority wala concept.

//   int priority(char ch){
//       if(ch=='^')
//       return 3;
//       else if(ch=='+'||ch=='-')
//       return 1;
//       else if(ch=='*'|| ch=='/')
//       return 2;
//       return 0;
//   }
//     string infixToPostfix(string str){
//         int i=0;
//         stack<char> stack;
//         string postfix="";
//         while(i<str.length()){
//              if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
//             postfix.push_back(str[i]);
//             else if(str[i]=='(')
//             stack.push(str[i]);
//             else if(str[i]==')'){
//                 while(!stack.empty()&&stack.top()!='('){
//                     postfix.push_back(stack.top());
//                     stack.pop();
//                 }
//                 stack.pop();
//             }
//             else {
//                 if(!stack.empty()&&priority(str[i])<=priority(stack.top())){
//                     postfix.push_back(stack.top());
//                     stack.pop();
//                 }
//                 stack.push(str[i]);
//             }
//             i++;
//         }
//                 while(!stack.empty()){
//             postfix.push_back(stack.top());
//             stack.pop();
//         }
//         return postfix;
//     }

//     // indfix to prefix.
//     /*
//     1) reverse the infix expression change (->) and )->(
//     2) convert to postfix in controlled env i.e prio(str[i])<prio(stack.top())
//         and if(str[i]=='^)
//         prio(stack.top()>=str[i])
//     3) reverse the statement.
//     */
//    string reverse(string &str){
//     int low=0,high=str.length()-1;
//     while(low<=high){
//         if(str[low]=='('&&str[high]==')')
//         low++,high--;
//         swap(str[low++],str[high--]);
//     }
//    }
//    string infixToPrefix(string str){
//     reverse(str);
//     int i=0;
//     stack<char> stack;
//     string prefix="";
//     while(i<str.length()){
//              if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
//             prefix.push_back(str[i]);
//             else if(str[i]=='(')
//             stack.push(str[i]);
//             else if(str[i]==')'){
//                 while(!stack.empty()&&stack.top()!='('){
//                     prefix.push_back(stack.top());
//                     stack.pop();
//                 }
//                 stack.pop();
//             }
//             else{
//                 if(str[i]=='^'){
//                     if(!stack.empty()&&priority(stack.top())>=priority(str[i])){
//                         prefix.push_back(stack.top());
//                         stack.pop();
//                     }
//                 }
//                 else{
//                         if(priority(str[i])<stack.top()&&!stack.empty()){
//                             prefix.push_back(stack.top());
//                             stack.pop();
//                         }
//                     }
//                     stack.push(str[i]); 
//             }  
//             i++;  
//         }
//         while(!stack.empty()){
//             prefix.push_back(stack.top());
//             stack.pop();
//         }
//         reverse(prefix);
//         return prefix;
//    }
//    string decodeMessage(string str,int length){
//     if(length==0)
//     return NULL;
//     int i=0;
//     string ans;
//     while(i<str.length()){
//         if(isdigit(str[i])){
//             int num=str[i]-'0';
//             char ch = 65+num-1;
//             ans.push_back(ch);
//             i++;
//         }
//         else if(str[i]=='_'){
//             ans.push_back(' ');
//             i++;
//         }
//                 else if(str[i]=='#'){
//             int start=i+1,j=i+1;
//             while(j<str.length()&&str[j]!='#')
//             j++;
//             string subStr=str.substr(start,j-start);
//             ans.append(subStr);
//             i=j;
//         }
//         else{
//             ans.push_back(str[i]);
//             i++;
//         }
//     }
//     return ans;
//    }
//    void moveToFront(string &str){
//     // int count=0;
//     // string str1="";
//     // string finalStr="";
//     // for(int i=0;i<str.length();i++){
//     //     if(str[i]=='#')
//     //     count++;
//     //     else
//     //     str1.push_back(str[i]);
//     // }
//     // while(count!=0){
//     //     finalStr.push_back('#');
//     //     count--;
//     // }
//     // finalStr.append(str1);
//     // str=finalStr;

//     int i=str.length()-1;
//     while(str[i]!='#')
//     i--;
//     int j=i-1;
//     while(j>=0){
//         if(str[j]!='#')
//         swap(str[j--],str[i--]);
//         else
//         j--;
//     }
//    }
//    string compresssionString(string str){
//     map<char,int> map;
//     string ans;


//     // for(int i=0;i<str.length();i++)
//     // map[str[i]]++;
//     // for(auto it:map){
//     //     ans.push_back(it.first);
//     //     ans.append(to_string(it.second));
//     // }

//     int count=0;
//     char ch;
//     for(int i=0;i<str.length();i++){
//         if(count==0){
//             ch=str[i];
//             count=2;
//         }
//         else if(ch==str[i])
//         count++;
//         else{
//             ans.push_back(ch);
//             ans.append(to_string(count));
//             count=0;
//         }
//     }
//     return ans;
//    }

//    void spiralPattern(vector<vector<int>> arr){
//     int rs=0,cs=0,re=arr.size()-1,ce=arr[0].size()-1,k=0;
//     while(k<arr.size()*arr[0].size()){
//         for(int i=cs;i<=ce;i++){
//             cout<<arr[rs][i]<<" ";
//             k++;
//         }
//         rs++;
//         for(int i=rs;i<=re;i++){
//             cout<<arr[i][ce]<<" ";
//             k++;
//         }
//         ce--;
//         for(int i=ce;i>=cs;i--){
//             cout<<arr[re][i]<<" ";
//             k++;
//         }
//         re--;
//         for(int i=re;i>=rs;i--){
//             cout<<arr[i][cs]<<" ";
//             k++;
//         }
//         cs++;
//     }
//    }

//    float equation(float a,float b){
//     return pow(a,3)+pow(a,2*b)+pow(2*a,2*b)+pow(2*a*b,2)+pow(a*b,2)+pow(b,3);
//    }

//    void pythagroeanTriplet(int n){
//     for(int a=1;a<=n;a++){
//         for(int b=a;b<=n;b++){
//             int c=sqrt((a*a)+(b*b));
//             if((c*c==(a*a)+(b*b))&&c<=n)
//                 cout<<a<<" "<<b<<" "<<c<<endl;
//         }
//     }
//    }

//    bool balancedParanthesis(string str){
//     stack<char> stack;
//     for(int i=0;i<str.length();i++){
//         if(str[i]=='('||str[i]=='{'||str[i]=='[')
//         stack.push(str[i]);
//         else if((str[i]==')'&&stack.top()!='(')||(str[i]=='}'&&stack.top()!='{')||(str[i]==']'&&stack.top()!='['))
//         return false;
//         else
//         stack.pop();
//     }
//     if(!stack.empty())
//     return false;
//     return true;
//    }


// //  maximum sum of largest subarray 
// int kadaneAlgo(vector<int> array) {
//     int maxSum = array[0]; 
//     int sum = 0; 
//     for (int i = 0; i < array.size(); i++) {
//         sum +=array[i];
//         maxSum = max(maxSum, sum);
//         if (sum < 0)
//          sum = 0;
//     }
//     return maxSum;
// }

// vector<int> intersection(vector<int> a1,vector<int> a2){
//     vector<int> result;
//     int i=0,j=0;
//     while(i<a1.size()&&j<a2.size()){
//         if(a1[i]<a2[j])
//         i++;
//         else if(a2[j]<a1[i])
//         j++;
//         else{
//             result.push_back(a1[i]);
//             i++,j++;
//         }
//     }
//     return result;
// }

// vector<vector<int>> mergeIntervals(vector<vector<int>> array){
//     // brute force approach
//     vector<vector<int>> ans;
//     sort(array.begin(),array.end());
//     // for(int i=0;i<array.size();i++){
//     //     int start=array[i][0];
//     //     int end=array[i][1];
//     //     if(!ans.empty()&&end<=ans.back()[1])
//     //     continue;
//     //     for(int j=i+1;j<array.size();j++){
//     //         if(array[j][0]<=end)
//     //         end=max(end,array[j][1]);
//     //         else
//     //         break;
//     //     }
//     //     ans.push_back({start,end});
//     // }
//     // return ans;

//     // optimus prime appraoch  just keep on changing the last digit.

    
//     for(int i=0;i<array.size();i++){
//         if(ans.empty()||array[i][0]>ans.back()[1])
//         ans.push_back({array[i][0],array[i][1]});
//         else
//         ans.back()[1]=max(array[i][1],ans.back()[1]);
//     }
//     return ans;
// }
// ******************************************************************************************************************************************************************************************************************************************************************************

    string countOccurances(string str){
        string ans;
        map<char,int> map;
        for(int i=0;i<str.length();i++)
        map[str[i]]++;
        for(auto it:map){
            ans.push_back(it.first);
            ans.append(to_string(it.second));
        }
        return ans;
    }

    void spiralTraversal(vector<vector<int>> array){
        int rs=0,cs=0,re=array.size()-1,ce=array[0].size()-1,k=0;
        while(k<array.size()*array[0].size()-1){
            for(int i=cs;i<=ce;i++){
                cout<<array[rs][i]<<" ";
                k++;
            }
            rs++;
            for(int i=rs;i<=re;i++){
                cout<<array[i][ce]<<" ";
                k++;
            }
            ce--;
            for(int i=ce;i>=cs;i--){
                cout<<array[re][i]<<" ";
                k++;
            }
            re--;
            for(int i=re;i>=rs;i--){
                cout<<array[i][cs]<<" ";
                k++;
            }
            cs++;
        }
    }

    void countOccurancesMark1(vector<int> arr){
        // map<int,int> map;
        // for(int i=0;i<arr.size();i++)
        // map[arr[i]]++;
        // for(auto it:map){
        //     cout<<"the no "<<it.first<<" and it's count "<<it.second;
        //     cout<<endl;
        // }

        // without map
        sort(arr.begin(),arr.end());
        int element =arr[0],count=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==element)
            count++;
            else{
                cout<<"The element is "<<element<<" and the count is "<<count<<endl;
                element=arr[i];
                count=1;
            }
        }
            
    }

    void moveToFront(string &str){
        int i=str.length()-1;
        while(str[i]!='#')
        i--;
        for(int j=i-1;j>=0;j--){
            if(str[j]!='#')
            swap(str[j],str[i--]);
        }
    }

    bool matrixCheck(vector<vector<int>> arr1,vector<vector<int>> arr2){
        if((arr1.size()!=arr2.size())&&(arr1[0].size()!=arr2[0].size()))
        return false;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr1[0].size();j++){
                if(arr1[i][j]!=arr2[i][j])
                return false;
            }
        }
        return true;
    }

    void pythagoreanTriplet(int n){
        for(int a=1;a<=n;a++){
            for(int b=a;b<=n;b++){
                int c=sqrt(a*a+b*b);
                if((c*c)==(a*a+b*b))
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
        }
    }

    bool stringRotation(string str1,string str2){
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        if(str1==str2)
        return true;
        return false;
    }
    class Node{
        public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
        Node(){

        }
    };

    Node* start=NULL;
    void insertValue(int data){
        Node* newNode = new Node(data);
        if(start==NULL)
        start=newNode;
        else{
            Node* tn = start;
            while(tn->next!=NULL)
            tn=tn->next;
            tn->next=newNode;
        }
    }
    void reverseLL(){
        Node* prev=NULL;
        Node* tn = start;
        while(tn->next!=NULL){
            Node* next=tn->next;
            tn->next=prev;
            prev=tn;
            tn=next;
        }
    }
    void printLL(){
        if(start!=NULL){
            Node* tn = start;
            while(tn->next!=NULL){
                cout<<tn->data<<" ";
                tn=tn->next;
            }
        }
    }
    string longestSubstring(string str){
        string ans;
        for(int i=0;i<str.length();i++){
            if(ans.empty()||ans.find(str[i])==string::npos)
            ans.push_back(str[i]);
        }
        return ans;
    }

    bool wellFormnessOfParanthesis(string str){
        stack<char> stack;
        for(int i=0;i<str.length();i++){
            if((str[i]=='(')||(str[i]=='{')||(str[i]=='['))
            stack.push(str[i]);
            else{
                if(stack.empty())
                return false;
                char ch=stack.top();
                stack.pop();
                if((str[i]==')'&&ch!='(')||(str[i]=='}'&&ch!='{')||(str[i]==']'&&ch!='['))
                return false;
            }
        }
        if(!stack.empty())
        return false;
        return true;
    }

    int kadaneAlgo(vector<int> arr){
        int sum=0,maxSum=arr[0];
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            maxSum=max(maxSum,sum);
            if(sum<0)
            sum=0;
        }
        return maxSum;
    }

    void rotateMatrix(vector<vector<int>> &array){
        vector<vector<int>> ans(array.size(),vector<int>(array[0].size()));
        for(int i=0;i<array.size();i++){
            for(int j=0;j<i+1;j++)
            swap(array[i][j],array[j][i]);
        }
        int l=0,h=array[0].size()-1,i=0;
        while(l<h){
            for(int i=0;i<array.size();i++){
                swap(array[l][i],array[h][i]);
            }
            l++,h--;
        }

    }
    char firstNonRepeated(string str){
        map<char,int> map;
        for(int i=0;i<str.length();i++)
        map[str[i]]++;
        for(int i=0;i<str.length();i++){
            if(map[str[i]]==1)
            return str[i];
        }
    }
    int majority(vector<int> arr){
        int count=0,element,count1=0;
        for(int i=0;i<arr.size();i++){
            if(count==0){
                element=arr[i];
                count=1;
            }else if(arr[i]==element)
            count++;
            else
            count--;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==element)
            count1++;
        }
        if(count1>=(arr.size()/2))
        return element;
    }
void rotatematrix(vector<vector<int>> &arr) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) { // Start j from i
            int tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
        }
    }
    
    // Step 2: Reverse each row for 90-degree clockwise rotation
    for (int i = 0; i < arr.size(); i++) {
        reverse(arr[i].begin(), arr[i].end()); // Use the reverse function from <algorithm>
    }
}
int longestString(string str){
    int length=0,count=0;
    string ans="";
    for(int i=0;i<str.length();i++){
        if(ans.empty()||ans.find(str[i])==string::npos){
        ans.push_back(str[i]);
        count++;
        }else{
            length=max(length,count);
            count=1;
            ans="";
            ans.push_back(str[i]);
        }   
    }
    length=max(length,count);
    return length;
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


    // cout<<equation(1,2);

    // pythagroeanTriplet(20);


    // cout<<balancedParanthesis("([])");

    // vector<int> array={-2,1,-3,4,-1,2,1,-5,4};
    // cout<<kadaneAlgo(array);


    // vector<int> a={1,2,2,1};
    // vector<int> b={2,2};
    // vector<int> ans=intersection(a,b);
    // for(auto it:ans)
    // cout<<it<<" ";

    // vector<vector<int>> array={{1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}};
    // vector<vector<int>> ans = mergeIntervals(array);
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[0].size();j++)
    //     cout<<ans[i][j]<<" ";
    //     cout<<endl;
    // }

    // string str="aabbbbeeeeffggg";
    // cout<<countOccurances(str);

    // vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    // spiralTraversal(arr);


    // vector<int> arr={1,2,3,3,4,1,4,5,1,2};
    // countOccurancesMark1(arr);

    // int dealership;
    // cin>>dealership;
    // while(dealership!=0){
    //     int noCar,noBike;
    //     cin>>noCar;
    //     cin>>noBike;
    //     cout<<"Total no of Tyers are "<<(noCar*4)+(noBike*2);
    //     dealership--;
    // }

    // string str="move#to#front#fight";
    // moveToFront(str);
    // cout<<str;

    // pythagoreanTriplet(20);

    // string str1="abcd";
    // string str2="cdab";
    // if(stringRotation(str1,str2))
    // cout<<"Strings are equal"<<endl;
    // else
    // cout<<"Strings are not equal"<<endl;

    // insertValue(10);
    // insertValue(20);
    // insertValue(30);
    // insertValue(40);
    // insertValue(50);
    // insertValue(60);
    // reverseLL();
    // printLL();

    // string str="abcabcbb";
    // cout<<longestSubstring(str);

    // string str="[(})]";
    // if(wellFormnessOfParanthesis(str))
    // cout<<"balanced"<<endl;
    // else
    // cout<<"Not Balanced"<<endl;


    // vector<int> array={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // cout<<kadaneAlgo(array);

    // vector<vector<int>> arr={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // rotateMatrix(arr);
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[0].size();j++)
    //     cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }

    // string str="aditya";
    // cout<<firstNonRepeated(str);

    // vector<int> arr={2, 2, 1, 1, 1,1,1,1,1 ,2, 2};
    // cout<<majority(arr);

    // vector<vector<int>> arr(3,vector<int> (3));
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++)
    //     cin>>arr[i][j];
    // }
    // rotateMatrix(arr);
    //                         for(int i=0;i<arr.size();i++){
    //                             for(int j=0;j<arr[0].size();j++)
    //                             cout<<arr[i][j]<<" ";
    //                             cout<<endl;
    //                         }

    cout<<longestString("abcdefg");

    return 0;
}
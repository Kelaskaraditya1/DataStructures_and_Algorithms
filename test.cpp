// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// bool linearSearch(vector<int> array,int key)
// {
//     for(int i=0;i<array.size();i++)
//     {
//         if(array[i]==key)
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int no,key;
//     cin>>no;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     cin>>key;
//     bool status=linearSearch(array,key);
//     if(status)
//     cout<<"Key is Present"<<endl;
//     else
//     cout<<"Key is Absent"<<endl;  
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// bool binarySearch(vector<int> array,int l,int h,int key)
// {
//     while(l<h)
//     {
//     int mid=(l+h)/2;
//     if(array[mid]==key)
//     return true;
//     else if(array[mid]<key)
//     {
//         l=mid+1;
//     }
//     else if(array[mid]>key)
//     {
//         h=mid-1;
//     }
//     }
//     return false;
// }
// int main()
// {
//     int no,key;
//     cin>>no>>key;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     for(int i=0;i<no;i++)
//     {
//         for(int j=i+1;j<no;j++)
//         {
//             if(array[i]>array[j])
//                 swap(array[i],array[j]);
//         }
//     }
//     bool status = binarySearch(array,0,no-1,key);
//     if(status)
//     cout<<"Key is present"<<endl;
//     else
//     cout<<"Key is absent"<<endl;
//     return 0;
// }#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// void insertionSort(vector<int> &array)
// {
//     for(int i=1; i<array.size(); i++)
//     {
//         int tmp=array[i],j=i-1;
//         while(j>=0)
//         {
//             if(array[j]>tmp)
//             array[j+1]=array[j];
//             j--;
//         }
//         array[j+1]=tmp;
//     }
// }
// int main()
// {
//     int no;
//     cin>>no;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     insertionSort(array);
//     cout<<"After sorting"<<endl;
//     for(int i=0;i<no;i++)
//     cout<<array[i]<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// void SelectionSortByMinElement(vector<int> &array)
// {
//     int i=0;
//     while(i<array.size())
//     {
//         int min_index=i;
//         for(int j=i+1;j<array.size();j++)
//         {
//             if(array[j]<array[min_index])
//             min_index=j;
//         }
//         swap(array[i++],array[min_index]);
//     }
// }
// void SelectionSort(vector<int> &array)
// {
//     int i=array.size()-1;
//     while(i>0)
//     {
//         int max_index=i;
//         for(int j=i-1;j>=0;j--)
//         {
//             if(array[j]>array[max_index])
//             max_index=j;
//         }
//         swap(array[i--],array[max_index]);
//     }
// }
// int main()
// {
//     int no;
//     cin>>no;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     // SelectionSortByMinElement(array);
//     SelectionSort(array);
//     for(int i=0;i<array.size();i++)
//     cout<<array[i]<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// int partition(vector<int> &array,int l,int h)
// {
//     int i=l-1,j=l;
//     while(j<=h)
//     {
//         if(array[j]<array[h])
//         swap(array[++i],array[j++]);
//         else
//         j++;
//     }
//     swap(array[++i],array[h]);
//     return i;
// }
// void quickSort(vector<int> &array,int l,int h)
// {
//     if(l<h)
//     {
//         int pivot_index=partition(array,l,h);
//         quickSort(array,l,pivot_index-1);
//         quickSort(array,pivot_index+1,h);
//     }
// }
// int main()
// {
//     int no;
//     cin>>no;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     quickSort(array,0,array.size()-1);
//     cout<<"After sorting"<<endl;
//     for(int i=0;i<array.size();i++)
//     cout<<array[i]<<" ";
//     return 0;
// }#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// void sortPositiveandNegative(vector<int> &array)
// {
//     int i=0;
//     for(int j=0;j<array.size();j++)
//     {
//         if(array[j]<0)
//             swap(array[i++],array[j]);
//     }
// }
// int main()
// {
//     int no;
//     cin>>no;
//     vector<int> array;
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     sortPositiveandNegative(array);
//     cout<<"After sorting"<<endl;
//     for(int i=0;i<array.size();i++)
//     cout<<array[i]<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// void sortZerosOnesandTwo(vector<int> &array)
// {
//     int l=0,j=array.size()-1,k=0;
//     while(k<=j)
//     {
//         if(array[k]==0)
//         swap(array[k++],array[l++]);
//         else if(array[k]==2)
//         swap(array[j--],array[k]);
//         else
//         k++;
//     }
// }
// int main()
// {
//     int no;
//     cin>>no;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     sortZerosOnesandTwo(array);
//     cout<<"After sorting"<<endl;
//     for(int i=0;i<array.size();i++)
//     cout<<array[i]<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// bool KeyPair(vector<int> array,int key)
// {
//     int l=0,h=array.size()-1;
//     while(l<h)
//     {
//         if((array[l]+array[h])==key)
//         return true;
//         else if(array[l]+array[h]>key)
//         h--;
//         else if(array[l]+array[h]<key)
//         l++;
//     }
//     return false;
// }
// int main()
// {
//     int no,key;
//     cin>>no>>key;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     sort(array.begin(),array.end());
//     if(KeyPair(array,key))
//     cout<<"Key Pair Exists"<<endl;
//     else
//     cout<<"Key Pair donot exists"<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// int pivotIndex(vector<int> array)
// {
//     vector<int> left_sum(array.size(),0);
//     vector<int> right_sum(array.size(),0);
//     for(int i=1;i<array.size();i++)
//     left_sum[i]=left_sum[i-1]+array[i-1];
//     for(int j=array.size()-2;j>=0;j--)
//     right_sum[j]=right_sum[j+1]+array[j+1];
//     for(int i=0;i<array.size();i++)
//     {
//         if(left_sum[i]==right_sum[i])
//         return i;
//     }
//     return -1;
// }
// int main()
// {
//     int no;
//     cin>>no;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     int index=pivotIndex(array);
//     if(index!=-1)
//     cout<<"The Pivot index is:"<<index<<endl;
//     else
//     cout<<"No Pivot index doesnot exist."<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// void ninetyDegree(vector<vector<int>> &array)
// {
//     //Transpose
//     int rows=array.size(),cols=array[0].size();
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             int tmp=array[i][j];
//             array[i][j]=array[j][i];
//             array[j][i]=tmp;
//         }
//     }
//     // rotating
//     int l=0,h=array.size()-1;
//     while(l<h)
//     {
//         for(int j=0;j<array.size();j++)
//         swap(array[j][l],array[j][h]);
//         l++,h--;
//     }    
// }
// int main()
// {
//     int rows,cols;
//     cin>>rows>>cols;
//     vector<vector<int>> array(rows,vector<int> (cols)); 
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         cin>>array[i][j];
//     }
//     cout<<"After rotating 90 degree"<<endl;
//     ninetyDegree(array);
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         cout<<array[i][j]<<" ";
//         cout<<endl;
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// vector<int> spiralMatrix(vector<vector<int>> array)
// {
//     vector<int> resultant;
//     int k=0,start_row=0,start_col=0,end_row=array.size()-1,end_col=array[0].size()-1;
//     while(k<(array.size()*array[0].size()))
//     {
//         for(int i=start_col;i<=end_col;i++)
//         {
//             cout<<array[start_row][i]<<" ";
//             resultant.push_back(array[start_row][i]);
//             k++;
//         }
//         start_row++;
//         for(int i=start_row;i<=end_row;i++)
//         {
//             cout<<array[i][end_col]<<" ";
//             resultant.push_back(array[i][end_col]);
//             k++;
//         }
//         end_col--;
//         for(int i=end_col;i>=start_col;i--)
//         {
//             cout<<array[end_row][i]<<" ";
//             resultant.push_back(array[end_row][i]);
//             k++;
//         }
//         end_row--;
//         for(int i=end_row;i>=start_row;i--)
//         {
//             cout<<array[i][start_col]<<" ";
//             resultant.push_back(array[i][start_col]);
//             k++;
//         }
//         start_col++;
//     }
//     return resultant;
// }
// int main()
// {
//     int rows,cols;
//     cin>>rows>>cols;
//     vector<vector<int>> array(rows,vector<int> (cols));
//     vector<int> resultant;
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         cin>>array[i][j];
//     }
//     cout<<"After Spiral Printing"<<endl;
//     resultant=spiralMatrix(array);
//     for(int i=0;i<resultant.size();i++)
//     cout<<resultant[i]<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// vector<int> wavePattern(vector<vector<int>> array)
// {
//     int rows=array.size(),cols=array[0].size();
//     vector<int> resultant;
//     for(int i=0;i<cols;i++)
//     {
//         if(i%2==0)
//         {
//             for(int j=0;j<rows;j++)
//             resultant.push_back(array[j][i]);
//         }
//         else
//         {
//             for(int j=rows-1;j>=0;j--)
//             resultant.push_back(array[j][i]);
//         }
//     }
//     return resultant;
// }
// int main()
// {
//     int rows,cols;
//     cin>>rows>>cols;
//     vector<vector<int>> array(rows,vector<int> (cols));
//     vector<int> resultant;
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         cin>>array[i][j];
//     }
//     resultant=wavePattern(array);
//     for(int i=0;i<resultant.size();i++)
//     {
//         cout<<resultant[i]<<" ";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// void print_extremes(vector<int> &array)
// {
//     int l=0,h=array.size()-1;
//     while(l<h)
//     {
//         cout<<array[l++]<<" , "<<array[h--]<<endl;
//         if(l==h/2)
//     cout<<array[l];
//     }
// }
// int main()
// {
//     int no;
//     cin>>no;
//     vector<int> array(no);
//     for(int i=0;i<no;i++)
//     cin>>array[i];
//     print_extremes(array);
//     return 0;
// }
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// vector<int> sort_positive_negative(vector<int> &array)
// {
//     int i=0,j=0;
//     while(j<array.size())
//     {
//         if(array[j]<0)
//         swap(array[i++],array[j++]);
//         else
//         j++;
//     }
//     return array;
// }
// vector<int> sort_zero_ones_two(vector<int> array)
// {
//     int i=0,j=array.size()-1,k=0;
//     while(k<j)
//     {
//         if(array[k]==0)
//         swap(array[k++],array[i++]);
//         else if(array[k]==2)
//         swap(array[k],array[j--]);
//         else 
//         k++;
//     }
//     return array;
// }
// void rotate_k_times(vector<int> &array,int rotation)
// {
//     vector<int> b;
//     for(int k=0;k<array.size();k++)
//     {
//         int new_index=(k+rotation)%array.size();
//         b[new_index]=array[k];
//     }
//     for(int i=0;i<b.size();i++)
//     cout<<b[i]<<" ";
// }
// vector<vector<int>> transpose(vector<vector<int>> &array)
// {
//     int rows=array.size(),cols=array[0].size();
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         swap(array[i][j],array[j][i]);
//     }
//     return array;
// }
// vector<vector<int>> rotate_ninety_degree(vector<vector<int>> array)
// {
//     int rows=array.size(),cols=array[0].size();
//     // Transpose logic 
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         swap(array[i][j],array[j][i]);
//     }
//     // Rotate Logic
//     int i=0,j=array[0].size()-1;
//     while(i<j)
//     {
//         for(int k=0;k<rows;k++)
//         swap(array[k][i++],array[k][j--]);
//     }
//     return array;
// }
// bool two_sum(vector<int> array,int key)
// {
//     // Normal approach
//     // for(int i=0;i<array.size();i++)
//     // {
//     //     for(int j=i+1;j<array.size();j++)
//     //     {
//     //         if(array[i]+array[j]==key)
//     //         return true;
//     //     }
//     // }
//     // return false;
//     // 2 pointer approach
//     int i=0,j=array.size()-1;
//     while(i<j)
//     {
//         int sum = array[i]+array[j];
//         if(sum==key)
//         return true;
//         else if(sum>key)
//         j--;
//         else if(sum <key)
//         i++;
//     }
//     return false;
// }
// int pivot_index(vector<int> array)
// {
    // int i=1;
    // while(i<array.size()-1)
    // {
    //     int rs=0,ls=0;
    //     for(int k=0;k<i;k++)
    //     ls=ls+array[k];
    //     for(int j=i+1;j<array.size();j++)
    //     rs=rs+array[j];
    //     if(ls==rs)
    //     return i;
    //     else
    //     i++;
    // }
    // return -1;
//     vector<int> left_sum(array.size(),0),right_sum(array.size(),0);
//     for(int i=1;i<array.size();i++)
//     left_sum[i]=left_sum[i-1]+array[i-1];
//     for(int i=array.size()-1;i>=0;i--)
//     right_sum[i-1]=right_sum[i]+array[i];
//     for(int i=0;i<array.size();i++)
//     {
//         if(left_sum[i]==right_sum[i])
//         return i;
//     }
//     return -1;
// }
// int missing_number(vector<int> array)
// {
//     // Normal approach
//     for(int i=0;i<array.size();i++)
//     {
//         for(int j=i+1;j<array.size();j++)
//         {
//             if(array[i]>array[j])
//             swap(array[i],array[j]);
//         }
//     }
//     for(int i=0;i<array.size();i++)
//     {
//         if(!array[i]==i)
//         return i;
//     }
//     return array.size();
    
// }
// int missing_number(vector<int> &array)
// {
//     int missing=0;
//     for(int i=0;i<array.size();i++)
//     {
//         for(int j=i+1;j<array.size();j++)
//         {
//             if(array[i]>array[j])
//             swap(array[i],array[j]);
//         }
//     }
//     int size=array[array.size()-1];
//     for(int i=0;i<array.size();i++)
//     missing=missing^array[i];
//     for(int i=0;i<=size;i++)
//     missing=missing^i;
//     return missing;

// }
// vector<int> sort_positive_negative(vector<int> &array)
// {
//     // 2 pointer approach
//     int i=0,j=0;
//     while(j<array.size())
//     {
//         if(array[j]<0)
//         swap(array[j++],array[i++]);
//         else
//         j++;
//     }
//     return array;
// }
// int duplicate_number(vector<int> array)
// {
//     // sort 
//     for(int i=0;i<array.size();i++)
//     {
//         for(int j=i+1;j<array.size();j++)
//         {
            
//         }
//     }
// }
// int longest_subarray(vector<int> array,int key)
// {
//     int length=0;
//     // for(int i=0;i<array.size();i++)
//     // {
//     //     for(int j=i;j<array.size();j++)
//     //     {
//     //         int sum=0;
//     //         for(int k=i;k<=j;k++)
//     //         sum+=array[k];
//     //         if(sum==key)
//     //         length=max(length,j-i+1);
//     //     }
//     // }
//     int left=0,right=0,sum=0;
//     while(right<array.size())
//     {
//         if(left<right)
//         sum+=array[right++];
//         if(sum==key)
//         length=max(length,(right-left+1));
//         while(sum>key&&left<right)
//         sum-=array[left++];
//     }
//     return length;
// }
// bool binarySearch(vector<int> array,int l,int h,int target)
// {
//     sort(array.begin(),array.end());
//     while(l<h)
//     {
//         int mid=(l+h)/2;
//         if(array[mid]==target)
//         return true;
//         if(array[mid]<target)
//         l=mid+1;
//         else if(array[mid]>target)
//         h=mid-1;
//     }
//     return false;
// }
// int binarySearch(vector<int> array,int low,int high,int target)
// {
//     if(low>high)
//     return -1;
//     int mid=(low+high)/2;
//     if(array[mid]==target)
//     return mid;
//     else if(array[mid]>target)
//     binarySearch(array,low,mid-1,target);
//     else
//     binarySearch(array,mid+1,high,target);
// }
// int lowerBound(vector<int> array,int target)
// {
//     int low=0,high=array.size()-1,ans=-1;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         if(array[mid]>=target)
//         {
//             ans=array[mid];
//             high=mid-1;
//         }
//         else if(array[mid]<target)
//         low=mid+1;
//     }
//     return ans;
// }
// int bubbleSort(vector<int> &array)
// {
//     for(int i=array.size()-1;i>=0;i--)
//     {
//         for(int j=0;j<i;j++)
//         {
//             if(array[j]>array[j+1])
//             swap(array[j],array[j+1]);
//         }
//     }
// }
// int selectionSort(vector<int> &array)
// {
//     for(int i=0;i<array.size();i++)
//     {
//         int min=i;
//         for(int j=i+1;j<array.size();j++)
//         if(array[min]>array[j])
//         min=j;
//         swap(array[min],array[i]);
//     }
// }
string eliminateDuplicate(string str){
    string ans="";
    int i=0;
    while(i<str.length()){
        if(str[i]==ans.back())
            ans.pop_back();
        else
            ans.push_back(str[i]);
        i++;
    }
    return ans;
}
string removeAllOccurence(string str1,string str2){
    while(str1.find(str2)!=string::npos){
        int index=str1.find(str2);
        str1.erase(index,str2.length());
    }
    return str1;
}
bool palindrome(string str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(str[low]==str[high])
        low++,high--;
        else
        return false;
    }
    return true;
}
bool checkPalindrome(string str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(str[low]==str[high])
            low++,high--;
        else{
            string str1=str.substr(low+1,high-low);
            string str2=str.substr(low,high-low);
            if(palindrome(str1)||palindrome(str2)){
                return true;
                break;
            }
            else{
                return false;
                break;
            }
        }
    }
    return true;
}
string removeDuplicates(string str){
    string temp="";
    int i=0;
    while(i<str.length()){
        if(temp.length()==0||temp.back()!=str[i])
        temp.push_back(str[i]);
        else
        temp.pop_back();
        i++;
    }
    return temp;
}
bool palindromeMark2(string str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(str[low++]!=str[high--])
        return false;
    }
    return true;
}
bool palindromeToBe(string str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(str[low]==str[high])
            low++,high--;
        else{
            string str1=str.substr(low,high-low);
            string str2=str.substr(low+1,high-low);
            if(palindromeMark2(str1)||palindromeMark2(str2))
            return true;
            else
            return false;
        }
    }
        if(low>high)
            return true;
}
int giveCountMf(string str,int low,int high){
    int count=0;
    while(str[low]==str[high]&&low>=0&&high<str.length())
    {
        count++;
        low--,high++;
    }
    return count;
}

int countPalindrome(string str){
    int oddCount=0,evenCount=0,total=0;
    for(int i=0;i<str.length();i++){
        oddCount=giveCountMf(str,i,i);
        evenCount=giveCountMf(str,i,i+1);
        total = total + evenCount+oddCount;
    }
    return total;
}

bool anagram(string str1,string str2){
    int hashTable[256]={0};
    for(int i=0;i<str1.length();i++)
    hashTable[str1[i]]++;
    for(int i=0;i<str2.length();i++)
    hashTable[str2[i]]--;
    for(int i=0;i<256;i++)
    {
        if(hashTable[i]!=0)
        return false;
    }
    return true;
}

bool anagramMark2(string str1,string str2){
    map<int,int> map1,map2;
    for(int i=0;i<str1.length();i++)
    map1[str1[i]]++;
    for(int i=0;i<str2.length();i++)
    map2[str2[i]]++;
    if(map1==map2)
    return true;
    return false;
}

void reverseOnlyAlphabet(string &str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(isalpha(str[low])!=0&&isalpha(str[high])!=0)
        swap(str[low++],str[high--]);
        else if(isalpha(str[low])==0)
        low++;
        else
        high--;
    }
}

vector<vector<string>> groupAnagram(vector<string> array){
    map<string,vector<string>> map;
    vector<vector<string>> ans;
    for(auto str:array){
        string str1=str;
        sort(str.begin(),str.end());
        map[str].push_back(str1);
    }
    for(auto it:map)
    ans.push_back(it.second);
    return ans;
}
bool checkPalindrome(vector<int> array){
    int low=0,high=array.size()-1;
    while(low<high){
        if(array[low++]!=array[high--])
        return false;
    }
    return true;
}
// int countParanthesis(string str){
//     int count=0;
//     string pattern="()";
//     while(str.find(pattern)!=string::npos){
//         count++;
//         int index=str.find(pattern);
//         str.erase(index,2);
//     }
//     return count;
// }
int countParanthesis(string str){
    int count=0;
    string pattern="()";
    while(str.find(pattern)!=string::npos){
        count++;
        int index=str.find(pattern);
        str.erase(index,2);
    }
    return count;
}
    string removeOuterParentheses(string str) {
        int i=0;
        string ans="";
        while(i<str.length()){
            int j=i+1;
            if(str[i]=='('&&str[j]=='('){
                while(str[j]!=')'&&str[j+1]!=')')
                j++;
                string subStr=str.substr(i+1,j-i);
                int count=countParanthesis(subStr);
                while(count!=0){
                    ans.append("()");
                    count--;
                }
                if(j+2<str.length())
                i=j+2;
            }
        }
        return ans;
    }
     int myAtoi(string str) {
        int sign=1,i=0,num=0;
        while(!isdigit(str[i])&&str[i]!='-')
        i++;
        if(str[i]=='-'){
            sign=-1;
            i++;
        }
        if(str[i]=='0')
        i++;
        while(isdigit(str[i])&&i<str.length()){
            if((num*10>INT_MAX/10)||((num*10==INT_MAX/10)&&(isdigit(str[i])>7))){
                return 0;
            }
            num=(num*10)+str[i++]-'0';
        }
        return sign*num;
    }
        string longestPalindrome(string str) {
        string oddString,evenString,finalString;
        int i=0,j=0;
        for(int k=0;k<str.length();k++){
            i=k;
            j=k;
            while(i>=0&&j<str.length()&&str[i]==str[j])
            i--,j++;
            if(oddString.length()<j-(i+1))
            oddString=str.substr(i+1,j-(i+1));
        }
        cout<<oddString<<endl;
        j=0,i=0;
            for(int k=0;k<str.length();k++){
            i=k;
            j=k+1;
            while(i>=0&&j<str.length()&&str[i]==str[j])
            i--,j++;
            i++;
            if(evenString.length()<j-i)
            evenString=str.substr(i,j-i);
        }
        cout<<evenString<<endl;
        if(evenString.length()>oddString.length())
        finalString=evenString;
        else
        finalString=oddString;
        return finalString;
    }
    // class Node{
    //     public:
    //     int data;
    //     Node* next;
    //     Node(int data1,Node* next1){
    //         data=data1;
    //         next=next1;
    //     }
    //     Node(int data1){
    //         data=data1;
    //         next=nullptr;
    //     }
    //     Node(){
            
    //     }
    // };
    // Node* start=NULL;
    // void insertElement(int data){
    //     Node* node = new Node(data);
    //     if(start==NULL)
    //     start=node;
    //     else{
    //         Node* tn=start;
    //         while(tn->next!=NULL)
    //         tn=tn->next;
    //         tn->next=node;
    //     }
    // }
    // void traversingLinkedList(){
    //     if(start==NULL)
    //     cout<<"Create a LinkedList 1st"<<endl;
    //     else{
    //         Node* tn = start;
    //         while(tn->next!=NULL){
    //             cout<<tn->data<<" ";
    //             tn=tn->next;
    //         }
    //     }
    // }
    // bool searchLinkedList(int target){
    //     if(start==NULL)
    //     cout<<"Create a LinkedList";
    //     else{
    //         Node* tn = start;
    //         while(tn->next!=NULL){
    //             if(tn->data==target)
    //             return true;
    //             else
    //             tn=tn->next;
    //         }
    //     }
    //     return false;
    // }
    // void removeHead(){
    //     if(start!=NULL){
    //         Node* tn = start;
    //         start=tn->next;
    //     }
    // }
    // void removeTail(){
    //     if(start!=NULL){
    //         Node* tn = start;
    //         while(tn->next->next!=NULL)
    //         tn=tn->next;
    //         tn->next=NULL;
    //     }
    // }
    // bool deleteElement(int target){
    //     if(start!=NULL){
    //         if(start->data==target)
    //         start=start->next;
    //         else{
    //             Node*tn =start;
    //             while(tn->next->data!=target)
    //             tn=tn->next;
    //             tn->next=tn->next->next;
    //         }
    //     }
    // }
    // void deleteNode(int x){
    //     int count=1;
    //     if(start!=NULL){
    //         if(x==1)
    //         start=start->next;
    //         else{
    //             Node* tn = start;
    //             while(count!=x-1){
    //                 count++;
    //                 tn=tn->next;
    //             }
    //             tn->next=tn->next->next;
    //         }
    //     }
    // }
    // void insertHead(int val){
    //     if(start!=NULL){
    //         Node* node = new Node(val);
    //         node->next=start;
    //         start=node;
    //     }
    // }
    // void insertLast(int x){
    //     if(start!=NULL){
    //         Node* tn = start;
    //         while(tn->next!=NULL)
    //         tn=tn->next;
    //         Node* node = new Node(x);
    //         tn->next=node;
    //     }
    // }
    // void insertElement(int x,int position){
    //     if(start!=NULL){
    //         Node* node = new Node(x);
    //         if(position==1){
    //             node->next=start;
    //             start=node;
    //         }
    //         else{
    //             int count=1;
    //             Node* tn = start;
    //             while(count!=position-1){
    //                 count++;
    //                 tn=tn->next;
    //             }
    //             node->next=tn->next;
    //             tn->next=node;

    //         }
    //     }
    // }
    // void insertBeforeValue(int val,int before){
    //     if(start!=NULL){
    //         Node* node = new Node(val);
    //         if(start->data==before){
    //             node->next=start;
    //             start=node;
    //         }
    //         else{
    //             Node* tn = start;
    //             while(tn->next->data!=before)
    //             tn=tn->next;
    //             node->next=tn->next;
    //             tn->next=node;
    //         }
    //     }
    // }
    // class DoubleNode{
    //     public:
    //     int data;
    //     DoubleNode* prev;
    //     DoubleNode* next;
    //     DoubleNode(int data,DoubleNode* prev,DoubleNode* next){
    //         this->data=data;
    //         this->prev=prev;
    //         this->next=next;
    //     }
    //     DoubleNode(int data){
    //         this->data=data;
    //         this->next=NULL;
    //         this->prev=NULL;
    //     }
    //     DoubleNode(){

    //     }
    // };
    // DoubleNode* DLLstart=NULL;
    // void printDoublyLinkedList(DoubleNode* head){
    //     if(head!=NULL)
    //     {
    //         DoubleNode* tn = head;
    //         while(tn!=NULL){
    //             cout<<tn->data<<" ";
    //             tn=tn->next;
    //         }
    //     }
    // }
    // DoubleNode* deleteHeadDLL(DoubleNode* head){
    //     if(head!=NULL&&head->next!=NULL){
    //         head=head->next;
    //         head->prev=NULL;
    //     }
    //     return head;
    // }
    // void insertDLL(int data){
    //     DoubleNode* node = new DoubleNode(data);
    //     if(DLLstart==NULL)
    //     DLLstart=node;
    //     else{
    //         DoubleNode* tn = DLLstart;
    //         while(tn->next!=NULL)
    //         tn=tn->next;
    //         tn->next=node;
    //         node->prev=tn;
    //     }
    // }
    // void printDll(){
    //     if(DLLstart!=NULL){
    //         DoubleNode* tn = DLLstart;
    //         while(tn!=NULL){
    //             cout<<tn->data<<" ";
    //             tn=tn->next;
    //         }
    //     }
    // }
    class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
    DLLNode* start = NULL;
    DLLNode* reverseDLL(DLLNode* head) {
        stack<int> stack;
        DLLNode* tn = head;
        while(tn!=NULL){
            stack.push(tn->data);
            tn=tn->next;
        }
        cout<<stack.size()<<endl;
        tn=head;
        while(tn!=NULL){
            tn->data=stack.top();
            stack.pop();
            tn=tn->next;
        }
        return head;
    }
    void printDLL(DLLNode* head){
        if(head!=NULL){
            DLLNode* tn = head;
            while(tn!=NULL){
                cout<<tn->data<<" ";
                tn=tn->next;
            }
        }
    }
    void printDLLWithoutHead(){
        if(start!=NULL){
            DLLNode* tn = start;
            while(tn!=NULL){
                cout<<tn->data<<" ";
                tn=tn->next;
            }
        }
    }
    void insertDLL(int data){
        DLLNode* node = new DLLNode(data);
        if(start==NULL)
        start=node;
        else{
            DLLNode* tn = start;
            while(tn->next!=NULL)
            tn=tn->next;
            tn->next=node;
            node->prev=tn;
        }
    }
    int lengthOfLastWord(string str){
        vector<string> strings;
        int i=0;
        string word="";
        while(i<str.length()){
            if(str[i]!=' ')
            word.push_back(str[i]);
            else{
                strings.push_back(word);
                word="";
            }
            i++;
        }
        strings.push_back(word);
        string lastword=strings[strings.size()-1];
        cout<<lastword<<endl;
        return lastword.length();
    }
    void counting(int n){
        cout<<n<<endl;
        if(n==1)
        return ;
        counting(n-1);
    }
    int factorial(int n){
        if(n==0||n==1)
        return 1;
        return n*factorial(n-1);
    }
    int fibonacci(int n){
        if(n==1)
        return 0;
        else if(n==2)
        return 1;
        else 
        return fibonacci(n-1)+fibonacci(n-2);
    }
    void fibonacciSeries(int n){
        for(int i=1;i<=n;i++)
        cout<<fibonacci(i)<<" ";
    }
    void printNumber(int no){
        vector<string> array={"one","two","three","four","five","six","seven","eight","nine"};
        int num=no;
        if(no==0)
        return ;
        printNumber(no/10);
        cout<<array[(num%10)-1]<<" ";
    }
    int powerFunction(int n){
        if(n==0)
        return 1;
        return 2*powerFunction(n-1);
    }
    bool sorted(int i,vector<int> array){
        if(i==array.size()-1)
        return true;
        if(array[i]<array[i+1])
        return sorted(i+1,array);
        else
        return false;
    }
    void properSubset(vector<int> input,vector<int> output,int index){
        if(index>input.size()){
            for(auto it:output)
            cout<<it<<" ";
            cout<<endl;
            return;
        }
        properSubset(input,output,index+1);
        output.push_back(input[index]);
        properSubset(input,output,index+1);
    }
    // int countOccurances(string str){
    //     int sum=0;
    //     map<char,int> map;
    //     for(int i=0;i<str.length();i++)
    //     map[str[i]]++;
    //     for(auto it:map){
    //         if(it.second<2)
    //         sum+=2;
    //         else
    //         sum+=it.second;
    //     }
    //     return sum;
    // }
    vector<int> findFactors(int no){
        vector<int> factors;
        for(int i=1;i<=no;i++){
            if(no%i==0)
            factors.push_back(i);
        }
        return factors;
    }
    int countOccurances(string str){
        map<char,int> map;
        int sum=0;
        for(int i=0;i<str.length();i++)
        map[str[i]]++;
        for(auto it:map){
            if(it.second<2)
            sum+=2;
            else
            sum+=it.second;
        }
        return sum;
    }
    bool specialString(string str){
        int i=2;
        char ch = str[0];
        while(i<str.length()){
            if(str[i]!=ch)
            return false;
            i=i+2;
        }
        return true;
    }
        struct student{
            public:
            string sid,name;
            int rollno;
            char div;
        };

        void printStudentDetails(struct student array[],int no){
            for(int i=0;i<no;i++){
                cout<<"The Sid of "<<i+1<<"th the Student is:"<<array[i].sid<<endl;
                cout<<"The name of "<<i+1<<"th the Student is:"<<array[i].name<<endl;
                cout<<"The rollno of "<<i+1<<"th the Student is:"<<array[i].rollno<<endl;
                cout<<"The Div of "<<i+1<<"th the Student is:"<<array[i].div<<endl;
                cout<<endl;

            }
        }
        int fiboRecursion(int n){
            if(n==1)
            return 0;
            else if(n==2)
            return 1;
            else
            return fiboRecursion(n-1)+fiboRecursion(n-2);
        }
        int factorialRecursion(int no){
    if(no==0||no==1)
    return 1;
    else
    return no*factorialRecursion(no-1);
} 
void reverseNo(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
class BinaryNo{
    public:
    bool checkBinary(string no){
        for(int i=0;i<no.length();i++){
            if(isdigit(no[i])){
                int n=no[i]-'0';
                if(n!=0&&n!=1)
                return false;
            }
        }
        return true;
    }
    string onesCompliment(string no){
        string ans;
        for(int i=0;i<no.length();i++){
            if(isdigit(no[i])){
                if(no[i]=='0')
                ans.push_back('1');
                else
                ans.push_back('0');
            }
        }
        return ans;
    }
    string twosCompliment(string &str){
        int carry=1;
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]=='1'&&carry==1)
            str[i]='0';
            else if(str[i]=='0'&&carry==1){
                str[i]='1';
                carry=0;
            }
        }
        return str;
    }


};
class Student{
    public:
    string sid,name;
    int rollNo;
    char div;
    double* cgpaPtr;
    static int count;
    // Student(string sid_,string name_,int rollNo_,char div_){
    //     sid=sid_;
    //     name=name_;
    //     rollNo=rollNo_;
    //     div=div_;
    // }
    Student(string sid,string name,int rollNo,char div,double cgpa){
        this->sid=sid;
        this->name=name;
        this->rollNo=rollNo;
        this->div=div;
        this->cgpaPtr=new double;
        *cgpaPtr=cgpa;

    }
    Student(const Student &s){
        this->sid=s.sid;
        this->name=s.name;
        this->rollNo=s.rollNo;
        this->div=s.div;
        this->cgpaPtr=new double;
        *this->cgpaPtr=*s.cgpaPtr;
    }
    Student(){

    }
    static void displayInfo(Student array[],int no){
        for(int i=0;i<no;i++){
            cout<<"The Sid of the Student is: "<<array[i].sid<<endl;
            cout<<"The Name of the Student is: "<<array[i].name<<endl;
            cout<<"The rollNo of the Student is: "<<array[i].rollNo<<endl;
            cout<<"The Div of the Student is: "<<array[i].div<<endl;
            cout<<endl;
        }
    }
    static void  printCount(){
        cout<<"There are "<<count+1<<"Students registered till now"<<endl;
    }
     void displayInfoStudent(){
            cout<<"The Sid of the Student is: "<<this->sid<<endl;
            cout<<"The Name of the Student is: "<<this->name<<endl;
            cout<<"The rollNo of the Student is: "<<this->rollNo<<endl;
            cout<<"The Div of the Student is: "<<this->div<<endl;
            cout<<"The Cgpa of the Student is:"<<*cgpaPtr;
            cout<<endl;
    }
};
class Point{
public:
int x,y;
static double distance(Point p1,Point p2){
    double distance,dx,dy;
    dx=pow((p2.x-p1.x),2);
    dy=pow((p2.y-p1.y),2);
    distance=pow((dx+dy),0.5);
    return distance;
}
};
int Student::count=0;
// class Aditya{
//     private:
//     int marks=10;
//     friend void takeMarks(Mayur mayur,Aditya aditya);
// };
// class Mayur{
//     private:
//     int marks=20;
//     friend void takeMarks(Mayur mayur,Aditya aditya);
// };
// void takeMarks(Mayur mayuyr,Aditya aditya){
//     cout<<"Sandesh after taking aditya's and mayur's mark's"<<mayuyr.marks+aditya.marks<<endl;
// }
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    Person(){

    }
    virtual void greetings(){
        cout<<"Greetings,I am Optimus Prime"<<endl;
    }
};
class Stud : public Person{
public:
string sid;
int rollNo;
Stud(string name,int age,string sid,int rollNo):Person(name,age){
    this->sid=sid;
    this->rollNo=rollNo;
}
Stud(){

}
void displayInfo(){
    cout<<"The Sid of the Student is:"<<this->sid<<endl;
    cout<<"The Name of the Student is:"<<this->name<<endl;
    cout<<"The Roll no of the Student is:"<<this->rollNo<<endl;
    cout<<"The Age of the Student is:"<<this->age<<endl;
    cout<<endl;
}
void greetings(){
    cout<<"Greetings,I am son of Optimus Prime"<<endl;
}
};

int* sortArray(int arr[],int no){
    sort(arr,arr+no);
    return arr;
}
class A{
    public:
    virtual void show()=0;
    void display(){
        cout<<"I am Ironman"<<endl;
    } 
};
class B:public A{
    public:
    void show(){
        cout<<"I am Batman"<<endl;
    }
    void greetings(){
        cout<<"Greetings,I am Optimus Prime"<<endl;
    }
};
class Bank{
    public:
    static int balance;
    static void deposite(int amount){
        try{
        if(amount<=0)
        throw invalid_argument("Enter amount greater than 0");
        balance+=amount;
        cout<<"Amount Deposited Sucessfully"<<endl;
        cout<<"Your Current Balance is:"<<balance<<endl;
        cout<<endl;
        }
        catch(exception &e){
            cout<<e.what();
        }

    }
    static void withdraw(int amount){
        try{
        if(amount<=0)
        throw invalid_argument("Enter amount greater than 0");
        else if(amount>balance)
        throw runtime_error("Insufficient Balance");
        balance-=amount;
        cout<<"Amount Withdrawn Sucessfully"<<endl;
        cout<<"Your Current Balance is:"<<balance<<endl;
        cout<<endl;
        }
        catch(exception &e){
            cout<<e.what();
        }

    }
};
int Bank::balance=1000;
int main()
{
    // int no,key;
    // cin>>no>>key;
    // vector<int> array(no);
    // for(int i=0;i<no;i++)
    // cin>>array[i];
    // cout<<"The longest subarray is "<<longest_subarray(array,key)<<endl;
    // cout<<"After sorting the array"<<endl;
    // for(int i=0;i<b.size();i++)
    // cout<<b[i]<<" ";
    // cout<<"The missing number is:"<<sort_positive_negative(array)<<endl;
    // int index=pivot_index(array);
    // if(index!=-1)
    // cout<<"The pivot index is:"<<index<<endl;
    // else
    // cout<<"No Pivot index"<<endl;
    // bool status = two_sum(array,key);
    // if(status)
    // cout<<"The Pair exists"<<endl;
    // else
    // cout<<"The Pair doesnot exists"<<endl;
    // array=sort_positive_negative(array);
    // for(int i=0;i<array.size();i++)
    // cout<<array[i]<<" ";
    // array=sort_zero_ones_two(array);
    // for(int i=0;i<array.size();i++)
    // cout<<array[i]<<" ";
    // rotate_k_times(array,k);
    // int rows,cols;
    // cin>>rows>>cols;
    // vector<vector<int>> array(rows,vector<int> (cols,0));
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<cols;j++)
    //     cin>>array[i][j];
    // }
    // // vector<vector<int>> b = transpose(array);
    // vector<vector<int>> b=rotate_ninety_degree(array); 
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<cols;j++)
    //     cout<<b[i][j]<<" ";
    //     cout<<endl;
    // }
    // int no,target;
    // cin>>no>>target;
    // vector<int> array(no);
    // for(int i=0;i<array.size();i++)
    // cin>>array[i];
    // int index=binarySearch(array,0,no-1,target);
    // if(index!=-1)
    // cout<<"The element exists at "<<index<<endl;
    // else
    // cout<<"Element is no present"<<endl;
    // int lowbound=lowerBound(array,target);
    // cout<<lowbound<<endl;
    // int no;
    // cin>>no;
    // vector<int> array(no);
    // for(int i=0;i<no;i++)
    // cin>>array[i];
    // selectionSort(array);
    // for(int i=0;i<array.size();i++)
    // cout<<array[i]<<" ";
    // string str;
    // getline(cin,str);
    // cout<<"After eliminating:"<<eliminateDuplicate(str);
    // string str1,str2;
    // cout<<"Enter Str1"<<endl;
    // getline(cin,str1);
    // cout<<"Enter Str2"<<endl;
    // getline(cin,str2);
    // cout<<"After removing all the occurance:"<<removeAllOccurence(str1,str2)<<endl;
    // string str;
    // getline(cin,str);
    // if(checkPalindrome(str))
    // cout<<"string is already a palindrome or can be a palindrome"<<endl;
    // else
    // cout<<"Not a palindrome"<<endl;
    // string str1,str2;
    // getline(cin,str1);
    // getline(cin,str2);
    // if(anagramMark2(str1,str2))
    // cout<<"Both are Anagram"<<endl;
    // else
    // cout<<"They are not Anagram"<<endl;
    // string str;
    // getline(cin,str);
    // reverseOnlyAlphabet(str);
    // cout<<"After reversing the string:"<<str;

    // vector<string> array={"eat","tea","tan","ate","nat","bat"};
    // vector<vector<string>> ans =groupAnagram(array);
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++)
    //     cout<<ans[i][j]<<" ";
    //     cout<<endl;
    // }
    // vector<int> array={1,1,1,2,2,2};
    // if(checkPalindrome(array))
    // cout<<"It is a Palindrome";
    // else
    // cout<<"not a palindrome";
    // string str;
    // getline(cin,str);
    // cout<<"The Count is:"<<removeOuterParentheses(str);
    // string str="words and 987";
    // cout<<myAtoi(str);
    // string str="cbbd";
    // cout<<longestPalindrome(str)<<endl;
    // insertElement(10);
    // insertElement(20);
    // insertElement(30);
    // insertElement(40);
    // insertElement(50);
    // insertElement(60);
    // insertElement(70);
    // insertElement(80);
    // insertElement(90);
    // insertElement(100);
    // insertElement(110);
    // if(searchLinkedList(9   0))
    // cout<<"Value is Present in the LinkedList"<<endl;
    // else
    // cout<<"Value is not present in the LL"<<endl;
    // traversingLinkedList();
    // cout<<"After removing the head"<<endl;
    // removeHead();
    // removeTail();
    // deleteElement(50);
    // deleteNode(5);
    // deleteNode(3);
    // insertBeforeValue(5,10);
    // insertBeforeValue(35,40);
    // traversingLinkedList();
    // insertDLL(10);
    // insertDLL(20);
    // insertDLL(30);
    // insertDLL(40);
    // insertDLL(50);
    // insertDLL(60);
    // insertDLL(70);
    // insertDLL(80);
    // insertDLL(90);
    // insertDLL(100);
    // insertDLL(110);
    // insertDLL(120);
    // insertDLL(130);
    // insertDLL(140);
    // insertDLL(150);
    // insertDLL(160);
    // insertDLL(170);
    // insertDLL(180);
    // printDLLWithoutHead();
    // printDLL(reverseDLL(start));
    // counting(5);
    // cout<<factorial(5);
    // fibonacciSeries(7);
    //  printNumber(432);
    // vector<int> v1={1,2,3,4,5};
    // vector<int> v2={1,2,3,4,3,2,1};
    // if(sorted(0,v2))
    // cout<<"array is sorted"<<endl;
    // else
    // cout<<"array is not sorted"<<endl;
    // vector<int> array={1,2,3};
    // vector<int> output;
    // properSubset(array,output-,0);
    // cout<<countOccurances("facetious");
    // vector<int> factors=findFactors(1869);
    // for(auto it:factors)
    // cout<<it<<" ";
    // string name="balloon";
    // cout<<countOccurances(name);
    // int sem,i=0;
    // cout<<" Enter no of sem";
    // cin>>sem;
    // vector<int> maxMarks;
    // while(i<sem){
    //     int subjects,marks,maxm=INT_MIN;
    //     cin>>subjects;
    //     for(int i=0;i<subjects;i++){
    //         cin>>marks;
    //         maxm=max(marks,maxm);
    //     }
    //     maxMarks.push_back(maxm);
    //     i++;
    // }
    // for(auto it:maxMarks)
    // cout<<it<<" ";
    // cout<<specialString("adaoas");
    // cout<<specialString("madam");
    // cout<<specialString("ababa");
    // cout<<specialString("bssbs");


    // int days;
    // cin>>days;
    // switch(days){
    //     case 1:
    //     cout<<"Monday"<<endl;
    //     break;
    //     case 2:
    //     cout<<"Tuesday"<<endl;
    //     break;
    //     case 3:
    //     cout<<"Wednesday"<<endl;
    //     break;
    //     case 4:
    //     cout<<"Thursday"<<endl;
    //     break;
    //     case 5:
    //     cout<<"Friday"<<endl;
    //     break;
    //     case 6:
    //     cout<<"Saturday"<<endl;
    //     break;
    //     case 7:
    //     cout<<"Sunday"<<endl;
    //     break;
    // }
    // int i=0;
    // switch(days){
    //     case 1:{
    //         cout<<"Monday"<<endl;
    //         i++;
    //     }break;
    //     case 2:{
    //         cout<<"Tuesday"<<endl;
    //         i++;
    //     }break;
    //     case 3:{
    //         cout<<"Wednesday"<<endl;
    //         i++;
    //     }break;
    //     case 4:{
    //         cout<<"Thursday"<<endl;
    //         i++;
    //     }break;
    //     case 5:{
    //         cout<<"Friday"<<endl;
    //         i++;
    //     }break;
    //     case 6:{
    //         cout<<"Saturday"<<endl;
    //         i++;
    //     }break;
    //     default:{
    //         cout<<"Sunday"<<endl;
    //         i++;
    //     }break;
    // }
    // cout<<i<<endl;

    // struct student array[200];
    // int no;
    // cin>>no;
    // for(int i=0;i<no;i++){
    //     cout<<"Enter the Sid of the Student"<<endl;
    //     cin>>array[i].sid;
    //     cout<<"Enter the name of the Student"<<endl;
    //     cin>>array[i].name;
    //     cout<<"Enter the Roll no of the Student"<<endl;
    //     cin>>array[i].rollno;
    //     cout<<"Enter the div of the Student"<<endl;
    //     cin>>array[i].div;
    //     cout<<endl;
    // }
    // printStudentDetails(array,no);
    // int no;
    // cin>>no;
    // int a=0,b=1,c;
    // if(no==1)
    // cout<<a<<endl;
    // else if(no==2)
    // cout<<a<<" "<<b<<endl;
    // else{
    //     cout<<a<<" "<<b<<" ";
    //     for(int i=3;i<=no;i++){
    //         c=a+b;
    //         cout<<c<<" ";
    //         a=b;
    //         b=c;
    //     }
    // }

    // for(int i=1;i<=no;i++)
    // cout<<fiboRecursion(i)<<" ";
    // cout<<factorialRecursion(no);
    // int a,b;
    // cin>>a>>b;
    // cout<<"Before Reverseing:"<<a<<" "<<b<<endl;
    // reverseNo(a,b);
    // cout<<"After Reversing:"<<a<<" "<<b<<endl;
    // string no;
    // cin>>no;
    // BinaryNo binary =  BinaryNo();
    // if(binary.checkBinary(no))
    // cout<<"The no is Binary "<<endl;
    // else
    // cout<<"No is not Binary"<<endl;
    // cout<<binary.onesCompliment(no)<<endl;
    // cout<<binary.twosCompliment(no);


    // Student array[200];
    // int no;
    // cin>>no;
    // for(int i=0;i<no;i++){
    //     cout<<"Enter the Sid of the Student"<<endl;
    //     cin>>array[i].sid;
    //     cout<<"Enter the name of the Student"<<endl;
    //     cin>>array[i].name;
    //     cout<<"Enter the RollNo of the Student"<<endl;
    //     cin>>array[i].rollNo;
    //     cout<<"Enter the Div of the Student"<<endl;
    //     cin>>array[i].div;
    //     cout<<endl;

    //     Student::count++;
    // }
    // Student::displayInfo(array,no);
    // Student::printCount();

    // Point p1,p2;
    // p1.x=5;
    // p1.y=5;
    // p2.x=10;
    // p2.y=10;
    // cout<<Point::distance(p1,p2);
    // Aditya aditya;
    // Mayur mayur;
    // cout<<takeMarks(aditya,mayur)<<endl;
        // Student aditya = Student("2021FHCO042","Aditya",54,'A',7.4);
        // Student mayur = Student(aditya);
        // aditya.displayInfoStudent();
        // *aditya.cgpaPtr=10.0;
        // aditya.displayInfoStudent();
        // mayur.displayInfoStudent();

        // Stud stud = Stud("Aditya",22,"2021FHCO042",54);
        // stud.displayInfo();

        // Stud s1;
        // s1.greetings();
        // Person p1;
        // p1.greetings();
        // vector<int> array={100,90,80,70,60,50,40,30,20,10};
        // int* a = sort(array);
        // for(int i=0;i<array.size();i++)
        // cout<<a[i]<<" ";

        // int* a = new int[10];
        // for(int i=0;i<10;i++)
        // cin>>a[i];
        // int *b=sortArray(a,10);
        // for(int i=0;i<10;i++)
        // cout<<b[i]<<" ";

        // B b ;
        // b.display();
        // b.greetings();
        // b.show();

        // A* a = &b;
        // a->display();
        // a->show();
        // Bank::withdraw(100);

         // File Handling

         // for writting the data to the file

        //  ofstream file;
        //  file.open("C:\\Users\\Aditya\\Desktop\\Programing files all\\C++ Final Codes\\text.txt");
        //  file<<"I am ironman";
        //  cout<<"Data added to the file Successfully"<<endl;
        //  file.close();

        // for reading the data from the file.

        //  ifstream file1;
        //  string str;
        //  file1.open("C:\\Users\\Aditya\\Desktop\\Programing files all\\C++ Final Codes\\text.txt");
        //  while(getline(file1,str))
        //  cout<<str;
        //  file1.close();


         // for deleting the file 
        //  int status=remove("C:\\Users\\Aditya\\Desktop\\Programing files all\\C++ Final Codes\\text.txt");
        //  if(status==0)
        //  cout<<"File Removed Successfullt"<<endl;
        //  else
        //  cout<<"Failed to Delete the File "<<endl;

        // int rows;
        // cin>>rows;
        // int count=1;
        // for(int i=0;i<rows;i++){
        //     for(int k=0;k<rows-(i+1);k++)
        //     cout<<" ";
        //     int j=0;
        //     count=1;
        //     while(j<=i){
        //         cout<<count++;
        //         j++;
        //     }
        //     count=count-2;
        //     while(j<2*i+1){
        //         cout<<count--;
        //         j++;
        //     }
        //     cout<<endl;
        // }
        // int rows;
        // cin>>rows;
        // for(int i=0;i<rows;i++){
        //     for(int k=0;k<rows-i;k++)
        //     cout<<" ";
        //     for(int j=0;j<i+1;j++)
        //     cout<<"* ";
        //     cout<<endl;
        // }


    return 0;
}  

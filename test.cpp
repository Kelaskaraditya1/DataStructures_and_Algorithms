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
    class Node{
        public:
        int data;
        Node* next;
        Node(int data1,Node* next1){
            data=data1;
            next=next1;
        }
        Node(int data1){
            data=data1;
            next=nullptr;
        }
        Node(){
            
        }
    };
    Node* start=NULL;
    void insertElement(int data){
        Node* node = new Node(data);
        if(start==NULL)
        start=node;
        else{
            Node* tn=start;
            while(tn->next!=NULL)
            tn=tn->next;
            tn->next=node;
        }
    }
    void traversingLinkedList(){
        if(start==NULL)
        cout<<"Create a LinkedList 1st"<<endl;
        else{
            Node* tn = start;
            while(tn->next!=NULL){
                cout<<tn->data<<" ";
                tn=tn->next;
            }
        }
    }
    bool searchLinkedList(int target){
        if(start==NULL)
        cout<<"Create a LinkedList";
        else{
            Node* tn = start;
            while(tn->next!=NULL){
                if(tn->data==target)
                return true;
                else
                tn=tn->next;
            }
        }
        return false;
    }
    void removeHead(){
        if(start!=NULL){
            Node* tn = start;
            start=tn->next;
        }
    }
    void removeTail(){
        if(start!=NULL){
            Node* tn = start;
            while(tn->next->next!=NULL)
            tn=tn->next;
            tn->next=NULL;
        }
    }
    bool deleteElement(int target){
        if(start!=NULL){
            if(start->data==target)
            start=start->next;
            else{
                Node*tn =start;
                while(tn->next->data!=target)
                tn=tn->next;
                tn->next=tn->next->next;
            }
        }
    }
    void deleteNode(int x){
        int count=1;
        if(start!=NULL){
            if(x==1)
            start=start->next;
            else{
                Node* tn = start;
                while(count!=x-1){
                    count++;
                    tn=tn->next;
                }
                tn->next=tn->next->next;
            }
        }
    }
    void insertHead(int val){
        if(start!=NULL){
            Node* node = new Node(val);
            node->next=start;
            start=node;
        }
    }
    void insertLast(int x){
        if(start!=NULL){
            Node* tn = start;
            while(tn->next!=NULL)
            tn=tn->next;
            Node* node = new Node(x);
            tn->next=node;
        }
    }
    void insertElement(int x,int position){
        if(start!=NULL){
            Node* node = new Node(x);
            if(position==1){
                node->next=start;
                start=node;
            }
            else{
                int count=1;
                Node* tn = start;
                while(count!=position-1){
                    count++;
                    tn=tn->next;
                }
                node->next=tn->next;
                tn->next=node;

            }
        }
    }
    void insertBeforeValue(int val,int before){
        if(start!=NULL){
            Node* node = new Node(val);
            if(start->data==before){
                node->next=start;
                start=node;
            }
            else{
                Node* tn = start;
                while(tn->next->data!=before)
                tn=tn->next;
                node->next=tn->next;
                tn->next=node;
            }
        }
    }
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
    insertElement(10);
    insertElement(20);
    insertElement(30);
    insertElement(40);
    insertElement(50);
    insertElement(60);
    insertElement(70);
    insertElement(80);
    insertElement(90);
    insertElement(100);
    insertElement(110);
    // if(searchLinkedList(9   0))
    // cout<<"Value is Present in the LinkedList"<<endl;
    // else
    // cout<<"Value is not present in the LL"<<endl;
    // traversingLinkedList();
    cout<<"After removing the head"<<endl;
    // removeHead();
    // removeTail();
    // deleteElement(50);
    // deleteNode(5);
    // deleteNode(3);
    insertBeforeValue(5,10);
    insertBeforeValue(35,40);
    traversingLinkedList();
    return 0;
}   
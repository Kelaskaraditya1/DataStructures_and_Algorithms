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
int lowerBound(vector<int> array,int target)
{
    int low=0,high=array.size()-1,ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]>=target)
        {
            ans=array[mid];
            high=mid-1;
        }
        else if(array[mid]<target)
        low=mid+1;
    }
    return ans;
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
    int no,target;
    cin>>no>>target;
    vector<int> array(no);
    for(int i=0;i<array.size();i++)
    cin>>array[i];
    // int index=binarySearch(array,0,no-1,target);
    // if(index!=-1)
    // cout<<"The element exists at "<<index<<endl;
    // else
    // cout<<"Element is no present"<<endl;
    int lowbound=lowerBound(array,target);
    cout<<lowbound<<endl;
    return 0;
}
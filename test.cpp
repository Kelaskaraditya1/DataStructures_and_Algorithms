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
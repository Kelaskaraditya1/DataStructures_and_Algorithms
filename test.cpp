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
// }
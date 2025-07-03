#include<bits/stdc++.h>
using namespace std;

int lowerBound(int key,vector<int> &vector){
sort(vector.begin(),vector.end());
for(int val:vector){
    if(val>=key)
        return val;
}
return -1; 
}

int upperBound(int key,vector<int> &vector){
    for(int val:vector){
        if(val>key)
            return val;
    }
    return -1;
}
int main(){
    cout<<"I am Ironman"<<endl;

    // Vector 
    //    1D Vector

    // initialiation:

    vector<int> v1 = {1,2,3,4,5};

    // int no;
    // cin>>no;

    // vector<int> v2(no);

    // for(int i=0;i<no;i++)
    //     cin>>v2[i];

    // vector<int> v3(no,0);

    // vector<int> v4(v1);

    // for(auto val:v4)
    //     cout<<val<<" ";

    // vetcor functions

    // 1) pushback Function

    // vector<int> vector;
    // int input;
    // cin>>input;
    // vector.push_back(input);
    // for(auto val:vector)
    //     cout<<val<<" ";

    // 2) pop_back Function

    // vector.pop_back();
    // for(auto val:vector)
    //     cout<<val<<" ";

    // 3) size and capacity

    // cout<<"size "<<v1.size()<<" capacity "<<v1.capacity()<<endl;

    // 4) iterators: begin which points to first element and end which points to the next memory block after the last element.
    // cout<<"first element: "<<*v1.begin()<<endl;
    // cout<<"last element: "<<*v1.end()<<endl;

    // iterators special type for iterating though any data structure.points to the memory location of the element:

    // vector<int>::iterator it=v1.begin();
    // while(it!=v1.end())
    //     cout<<*it++<<" ";
    // cout<<endl;

    // for(auto it =v1.begin();it!=v1.end();it++)
    //     cout<<*it<<" ";

    // 5) clear function
    // v1.clear();
    // for(auto val:v1)
    //     cout<<val<<" ";

    /*6) earase function
    v1.erase(v1.begin()) removes the first element
    v1.erase(v1.begin()+n) removes the nth element
    v1.erase(v1.begin(),v1.begin()+n) removes the first n elements
    */  


    // v1.erase(v1.begin(),v1.begin()+2);
    // for(auto val:v1)
    //     cout<<val<<" ";

    // 7) empty function

    // v1.empty()? cout<<"vector is empty"<<endl : cout<<"vector is not empty"<<endl;

    // 8) insert function

    // v1.insert(v1.begin()+2,10);
    // for(auto val:v1)
    //     cout<<val<<" ";


        // 2D-Vector

        // initialization:
        // int rows,cols;
        // cin>>rows>>cols;

        // vector<vector<int>> twoDVector1(rows,vector<int>(cols));

        // initialization with a single value.
        // vector<vector<int>> twoDVector2(rows,vector<int>(cols,0));

        // input:
        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++)
        //         cin>>twoDVector1[i][j];
        // }

        // output

        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++){
        //         cout<<twoDVector1[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        // Matrix addition

        // vector<vector<int>> a(rows,vector<int> (cols));
        // vector<vector<int>> b(rows,vector<int> (cols));

        // cout<<"Enter elements of first matrix:"<<endl;
        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++)
        //     cin>>a[i][j];
        // }

        // cout<<"Enter elements of second matrix:"<<endl;
        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++)
        //     cin>>b[i][j];
        // }

        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++)
        //         cout<<a[i][j]+b[i][j]<<" ";
        //     cout<<endl;
        // }


        // L2)ist (implemented as doubly linked list), can perform operations from both front and back.

        // initialization

        list<int> l1 = {1,2,3,4,5,6,7,8,9};
        list<int> l2(10,0); // listt of size with all elements 0.


        l1.push_front(0);
        l1.push_back(10);

        // input
        // int no;
        // cin>>no;
        // list<int> l3;
        // for(int i=0;i<no;i++){
        //     int val;
        //     cin>>val;
        //     l3.push_back(val);
        // }
        // for(auto it:l3)
        //     cout<<it<<" ";
        // cout<<endl;

        // output
        // for(auto val:l1)
        //     cout<<val<<" ";
        // cout<<endl;

        // list functions

        // 1) size function
        // cout<<l2.size()<<endl;

        // 2) popFront and popback function
        l1.pop_front();
        l1.pop_back();
        // for(auto val:l1)
        //     cout<<val<<" ";

        // using iterators

        // auto it = l1.begin();
        // while(it!=l1.end())
        //     cout<<*it++<<" ";


        // 3) Deque implemented as a dynamic array.

        // initialization
        deque<int> d1 = {1,2,3,4,5,6,7,8,9};

        // int no;
        // cin>>no;
        // deque<int> d2(no);

        // for(auto it:d1)
        //     cout<<it<<" ";
        //     cout<<endl;

        // for(int i=0;i<no;i++)
        // cin>>d2[i];

        // for(auto it:d2)
        //     cout<<it<<" ";

        // rest of the functions are same as vector.

        // 4)Pair: pair of key and value.

        // initialization:
        // pair<int,int> pair1 = {1,2};

        // nested Pairs:
        // pair<string,pair<int,int>> pair2 = {"Ironman",{2,3}};

        // input
        // pair<int,int> pair3;
        // cout<<"Enter element's of pair: ";
        // cin>>pair3.first>>pair3.second;


        // output"
        // cout<<"First element: "<<pair1.first<<" Second element: "<<pair1.second<<endl;

        // cout<<"First element: "<<pair2.first<<" Second Pair: "<<pair2.second.first<<" "<<pair2.second.second<<endl;

        // cout<<"First element: "<<pair3.first<<" Second element: "<<pair3.second<<endl;

        // vector of pairs:

        // int no;
        // cout<<"Enter number of pairs: ";
        // cin>>no;
        // vector<int> array;
        // vector<pair<int,int>> arr;

        // input to vector:

        // for(int i=0;i<no;i++){
            // cout<<"Enter the first element of the pair: "<<endl;
            // cin>>arr[i].first;
            // cout<<"Enter the second element of the pair: "<<endl;
            // cin>>arr[i].second;

        //     int first;
        //     cin>>first;
        //     int second;
        //     cin>>second;
        //     arr.push_back({first,second});
        // } 

        
        // for(auto it:arr)
        //     cout<<"First element: "<<it.first<<" Second element: "<<it.second<<endl;

        // for(int i=0;i<no;i++){
        //     int val;
        //     cin>>val;
        //     array.push_back(val);
        // }

        // for(auto it:array)
        //     cout<<it<<" ";

        // 5) Stack:

        // initialization:

        // int no;
        // cout<<"Enter number of elements in stack: ";
        // cin>>no;
        // stack<int> s1;
        // for(int i=0;i<no;i++){
        //     int val;
        //     cin>>val;
        //     s1.push(val);
        // }

        // // output:
        // for(int i=0;i<no;i++){
        //     cout<<s1.top()<<" ";
        //     s1.pop();
        // }


        // 6) Priority Queue:implements max heap by default, stores the maximum element on the top.

        // initialization:
        // priority_queue<int> pq1;  // stores maximum element on the top

        // priority_queue<int,vector<int>,greater<int>> pq2;

        // int no;
        // cout<<"Enter number of elements in priority queue: ";
        // cin>>no;

        // for(int i=0;i<no;i++){
        //     int val;
        //     cin>>val;
        //     pq2.push(val);
        // }

        // // output:

        // for(int i=0;i<no;i++){
        //     cout<<pq2.top()<<" ";
        //     pq2.pop();
        // }


        // 7) Map: stores it in an sorted order. 

        // initialization:

        // map<int,int> map1;

        // map<int,int> map2={{1,2},{3,4},{5,6}};

        // int no;
        // cin>>no;
        // for(int i=0;i<no;i++){
        //     string key;
        //     cin>>key;
        //     int value;
        //     cin>>value;
        //     map1.insert({key,value});
        // }

        // for(auto it:map1)
        //     cout<<"key: "<<it.first<<" value: "<<it.second<<endl;

            // vector<int> array ={1,2,3,4,5,6,5,4,3,2,1};
            
            // for(int i=0;i<array.size();i++)
            //     map1[array[i]]++;

            // for(auto it:map1)
            //     cout<<"key: "<<it.first<<" value: "<<it.second<<endl;

            // if(map1.find(10)!=map1.end())
            //     cout<<map1[5]<<endl;
            // else
            //     cout<<"Key not found"<<endl;

            // Unordered Map: 

            // initialization:
            // unordered_map<int,int> un_map={{1,2},{3,4},{5,6}};

            // unordered_map<int,int> un_map2;

            // // iteration:
            // for(auto it:un_map)
            //     cout<<"Key: "<<it.first<<"Value: "<<it.second<<endl;

            // // input:
            // int no;
            // cout<<"Enter number of elements in unordered map: ";
            // cin>>no;
            // for(int i=0;i<no;i++){
            //     int key;
            //     cin>>key;
            //     int value;
            //     cin>>value;
            //     un_map2.insert({key,value});
            // }

            // // output:
            // for(auto it:un_map2)
            //     cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;

            //8) Set: stores unique values in sorted order.

            // initialization:

            // set<int> set1 ={1,2,2,3,4,5,5,5,6};
            // set<int> set2;

            // int no;
            // cin>>no;

            // for(int i=0;i<no;i++){
            //     int val;
            //     cin>>val;
            //     set2.insert(val);
            // }

            // // iteration:
            // for(auto it:set2)
            //     cout<<it<<" ";

            /*lowerBound and upperBound:
            lower bound of n is the the same value or a value which is just greater than n lowerBound(n)=n or val>n (greater or equal)
            upper bound of n is the value just greater than n (strictly greater) */ 





















    

    
    



    
    
    return 0;
}

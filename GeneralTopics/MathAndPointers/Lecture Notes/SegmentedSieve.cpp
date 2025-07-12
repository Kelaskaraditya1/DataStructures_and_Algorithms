#include<bits/stdc++.h>
using namespace std;

// Optimization 1: rather than starting from j=2*i start with j=i*i since the earlier indexes will already be marked by the previous indexes.

int SieveAlgorithm(int no){

    int count=0;
    vector<bool> vector(no+1,true);

    vector[0]=vector[1]=false;

    for(int i=2;i<no;i++){
        if(vector[i]){
            count++;
            cout<<i<<endl;
            int j=i*i;
            while(j<no){
                vector[j]=false;
                j+=i;
            }
        }
    }

    return count;

}

vector<bool> sieve(int no){
    vector<bool> sieve(no,true);

    sieve[0]=sieve[1]=false;

    for(int i=2;i<no;i++){
        if(sieve[i]){
            int j=i*i;
            while(j<no){
                sieve[j]=false;
                j+=i;
            }
        }
    }

    return sieve;
}

int segmentedSieve(){
    
}


int main(){
    cout<<"I am Ironman"<<endl;

    //     cout<<"Enter the upper limit"<<endl;
    //    int upperLimit;
    //    cin>>upperLimit;

    //    cout<<"The number of primes less than "<<upperLimit<<" are: "<<SieveAlgorithm(upperLimit)<<endl;

    vector<bool> arr = sieve(20);
    for(int i=0;i<arr.size();i++){
        if(arr[i])
            cout<<i<<" ";
    }

    return 0;
}
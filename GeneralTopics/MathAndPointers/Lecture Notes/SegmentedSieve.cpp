#include<bits/stdc++.h>
using namespace std;

// Optimization 1: rather than starting from j=2*i start with j=i*i since the earlier indexes will already be marked by the previous indexes.

vector<bool> SieveAlgorithm(int no){

    int count=0;
    vector<bool> vector(no+1,true);

    vector[0]=vector[1]=false;

    for(int i=2;i*i<=no;i++){
        if(vector[i]){
            count++;
            int j=i*i;
            while(j<no){
                vector[j]=false;
                j+=i;
            }
        }
    }

    return vector;

}

// Optimization 2: since we are starting the inner loop from j=i*i, so some times it might be greater than no as well so we customize the outer loop as well that i<sqrt(no)

vector<bool> sieve(int no){
    vector<bool> sieve(no,true);

    sieve[0]=sieve[1]=false;

    for(int i=2;i<=sqrt(no);i++){
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

vector<bool> segmentedSieve(int l,int h){

    vector<bool> sieve = SieveAlgorithm(sqrt(h));

    vector<int> primes;

    for(int i=0;i<sieve.size();i++){
        if(sieve[i])
            primes.push_back(i);
    }

    vector<bool> segSieve(h-l+1,true);

    for(auto prime:primes){

        int first = (l/prime)*prime;

        if(first<l)
            first+=prime;

        int j = max(prime*prime,first);

        while(j<=h){
            segSieve[j-l]=false;
            j+=prime;
        }
    }

    return segSieve;


    
}


int main(){
    cout<<"I am Ironman"<<endl;

    //     cout<<"Enter the upper limit"<<endl;
    //    int upperLimit;
    //    cin>>upperLimit;

    //    cout<<"The number of primes less than "<<upperLimit<<" are: "<<SieveAlgorithm(upperLimit)<<endl;

    // vector<bool> arr = sieve(20);
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i])
    //         cout<<i<<" ";
    // }

    // cout<<endl;

    vector<bool> primeNo = segmentedSieve(110,130);
    for(int i=0;i<primeNo.size();i++){
        if(primeNo[i])
            cout<<110+i<<" ";
    }

    return 0;
}
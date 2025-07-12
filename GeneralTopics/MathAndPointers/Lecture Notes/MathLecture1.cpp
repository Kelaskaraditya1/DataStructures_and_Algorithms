#include<bits/stdc++.h>
using namespace std;
bool isPrime(int no){
    if(no==0 || no==1)
    return false;
    for(int i=2;i<=sqrt(no);i++){
        if(no%i==0)
            return false;
    }
        return true;
}

int countPrimes(int no){

    if(no==0 || no==1)
        return 0;

    int count=0;

    for(int i=2;i<no;i++){
        if(isPrime(i))
            count++;
    }

    return count;
}

int sieveAlgorithm(int no){

    int count=0;

    if(no==0 || no==1)
        return 0;

    vector<bool> vector(no,true);
    vector[0]=vector[1]=true;

    for(int i=2;i<no;i++){
        if(vector[i]){
            count++;
            int j=2*i;
            while(j<no){
                vector[j]=false;
                j+=i;
            }
        }
    }

    return count;

}

int gcd(int a,int b){
    
    if(a==0)
        return b;
    else if(b==0)
        return a;

    while(a>0 && b>0){
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    return a==0?b:a;
}

int lcm(int a,int b){

    /*lcm*hcf=a*b
    so, lcm=a*b/hcf */ 

    int hcf = gcd(a,b);
    return (a*b)/hcf;
}

int fasterExponent(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1)
            ans*=a;
        ans*=a;
        b>>=1;
    }
    return ans;
}

int main(){
    //    cout<<"I am Ironman"<<endl;

    //    cout<<"Enter the upper limit"<<endl;
    //    int upperLimit;
    //    cin>>upperLimit;

    //    cout<<"The number of primes less than "<<upperLimit<<" are: "<<sieveAlgorithm(upperLimit)<<endl;

       cout<<"Gcd of a=72 and b=24 is:"<<gcd(24,72)<<endl;

        cout<<"Gcd of a=72 and b=24 is:"<<lcm(24,72)<<endl;

    cout<<"2^5= "<<fasterExponent(2,5)<<endl;



    return 0;
}
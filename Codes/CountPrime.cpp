#include <bits/stdc++.h>
using namespace std;

int countPrime(int n){
  int count = 0;
        vector<bool> prime(n+1,true);
        
        prime[0] = prime[1] = false;        //0,1 are not prime numbers
        
        for(int i=2;i<n;i++){
            
            if(prime[i])
                count++;
    
            for(int j=2*i;j<n;j+=i)       //traversing start with 2
                prime[j] = false;      
        }
        return count;
}

int main(){
    int n;
    cout<<"Enter A Number N To Find Prime Number Below N "<<endl;
    cin>>n;
    
    cout<<"No Of Prime Number Are "<<countPrime(n)<<endl;
}

//This Algorithm Is Know As :- Sieve Of Eratostheres 
//used to find number of prime number below a given integer

//Time Complexity --> O(n*log(logn))
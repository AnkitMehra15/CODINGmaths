#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n){
    int count=0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number you want to find prime numbers within a range ..... "<<endl;
    cin>>n;

    int totalPrime=countPrimes(n);   
    cout<<"Total prime number between [2 , "<<n<<"] is "<<totalPrime<<" Prime Numbers ." <<endl;
    return 0;
}
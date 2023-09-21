#include<bits/stdc++.h>
using namespace std;
int exponential(int a,int b){
    int result=1;
    while(b>0){
        if(b&1) //a is odd
        {
            result=result*a;
        }
        a=a*a;
        b=b>>1; //b right shift --> means b/2

    }
    return result;
}

int main(){
    int a,b;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    cout<<"enter the value of b(power) : "<<endl;
    cin>>b;
    cout<<"OK "<<endl;

    int ans=exponential(a,b);
    cout<<"The answer of a^b is : "<<ans<<endl;

    return 0;
}

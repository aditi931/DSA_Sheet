#include<bits/stdc++.h>
using namespace std;
/*
   //brute fore approach
    double myPow(double x, int n){
        double ans = 1.0;
        for(int i=0;i<n;i++){
          
          ans*=x;
        }
        return ans;
    }
*/
//binary exponent optimal approach

double myPow(double x, int n){
    double ans=1.0;
    long long nn = n;
    if(nn<0){
        nn =-1*nn;
    }
    while(nn){
        if(nn%2){
            ans= ans*x;
            nn=nn-1;
        }
        else{
            x=x*x;
            nn=nn/2;
        }
    }
    if(n<0)
     ans = (double)(1.0)/(double)(ans);
     return ans;
}
//recursive solution giving Runtime error
    double myPow( double x, int n){
        if(n==0)
            return 1;
        else if(n<0)
            return pow(1/x, -n);
        else 
            return x*myPow(x, n-1);
    }

    //best solution

    double pow(double x, int n){
        if(n==0)
         return 1;
        if(n==1)
          return x;
        if(n%2==0)
          return pow*(x*x, n/2);
        return x*pow(x*x, n/2);    
    }
    double myPow(double x, int n){
        if(n<0){
            return 1/pow(x, abs(n));
        }
        return pow(x, n);
    }

int main(){
    cout<< myPow(2.0000,10)<<endl;
}


#include<bits/stdc++.h>
using namespace std;
// Functions declaration

// isprime() function to check wheather a number is prime or not
bool isprime(int n){
    // base cases check
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}


int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        for(int i=n;i<=m;i++){
            if(isprime(i)) cout<<i<<endl;
        }
        cout<<endl;
    }

    return 0;
}
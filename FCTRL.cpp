#include<bits/stdc++.h>
using namespace std;

// Function declarations

// countzero() function to count number of zeros in factorial of a number

int countzero(int n){
    int count = 0;
    for(int i=5;i<=n;i*=5){ // The concept is that trailing zero comes from no. of 5s in its factor
        count += (n/i);
    }
    return count;
}


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<countzero(n)<<endl;
    }
}
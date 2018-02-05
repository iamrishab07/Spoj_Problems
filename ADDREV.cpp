#include<bits/stdc++.h>

using namespace std;
// Function declaration
// rev() function to reverse a number. Returns integer
int rev(int val){
    int a = 0;
    while(val){
        a = a*10 + (val%10);
        val /= 10;
    }
    return a;
}


int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(rev(rev(a)+rev(b)))<<endl;
    }
    return 0;
}
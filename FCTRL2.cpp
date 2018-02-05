#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[200];
        int m = 1;//number of digits
        arr[0] = 1;
        int carry = 0;
        // main loop to multiply

        for(int i=1;i<=n;i++){// loop for multiplying all numbers from 1 to n
            for(int j=0;j<m;j++){
                int x = arr[j]*i + carry;
                arr[j] = x%10;
                carry = x/10;
            }
            while(carry>0){
                arr[m] = carry%10;
                carry /= 10;
                m++;
            }
        }
        for(int i=m-1;i>=0;i--) cout<<arr[i];
        cout<<endl;

    }
    return 0;
}
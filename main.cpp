//In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    long long t,n;
    cin>> t;
    while(t--){
        cin>> n;
        if((n/2)%2==1) cout<<"NO";
        else {
            cout<<"YES"<<endl;
            for(long long i=2;i<=n;i=i+2) cout<<i<<" ";
            for(long long i=1;i<n;i=i+2) {
                    if(i==(n-1)) cout<<i+(n/2)<<" ";
                    else cout<<i<<" ";
        }
    }
    cout<<endl;
  }
}
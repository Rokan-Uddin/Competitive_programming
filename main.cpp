//In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    long long t,n;
    cin>>t;
    while(t--) { 
    cin>> n;
    long long ans=0;
    while(1) {
      if(n==1) break; 
      else if(n%6 ==0 ) {
        n=n/6;
        ans++;
      }
      else if(n%6==2 || n%6==4 || n%6==5) {ans =-1;break;}
      else {
        n=n*2; 
        ans++;
      }
    }
    cout<<ans<<endl;
    }
}
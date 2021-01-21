//In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    long long m,n,sum=0;
    cin>>n>>m;
    vector<long long>v(n);
    for(long long i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(long long i=0;i<m;i++) { 
    if(v[i]>0) break;
     sum += abs(v[i]) ;
    }
    cout<<sum<<endl;
}
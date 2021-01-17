#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
typedef long long ll;
const ll infLL = 9000000000000000000;
const int mx = 1e3+123;
int a[mx], n;
int main()
{
    optimize();
    int n,val,t;
    cin>>n;
     vector<int>v(n+1);
    v[0]=0;
    for(int i=1;i<=n;i++) {
      cin>>val;
      v[i]= val+v[i-1];
    }
    cin>>n;
     for(int i=0;i<n;i++) {
          cin>>val;
           int it= lower_bound(v.begin(), v.end(), val)-v.begin();
           cout<<it<< " " ;
     }
     cout<<endl; 
    return 0;
}
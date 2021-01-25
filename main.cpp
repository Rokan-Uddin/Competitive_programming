//Bismillahir rahmanir rahim
//MD Rokan Uddin
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t,n,val;
    cin>>t;
    while(t--) {
        cin>>n;
        set<ll>s;
        ll ans=0;
      for(ll i=0;i<n;i++) { cin>>val; if(val%2==0) s.insert(val); }
      while(s.size()!=0) {
        auto it= s.crbegin();
        auto k= *it;
        s.erase(*it);
        if(k%2==0) {
            s.insert(k/2);
            ans++;
         }
        }
      cout<<ans<<endl;
    }
}

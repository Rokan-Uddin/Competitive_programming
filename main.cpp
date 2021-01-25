//Bismillahir rahmanir rahim
//MD Rokan Uddin
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,k,val,ans=0;
    vector<ll>v;
    map<ll,ll>mp;
    cin>>n>>k;
    for(ll i=0;i<n;i++) {
            cin>>val;
            val= val%k;
            v.push_back(val);
            mp[val]++;
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++) {
        ll m= (k-v[i]);
        if(m==k) m=0;
        if(binary_search(v.begin()+i,v.end(),m)) {
            mp[v[i]]--;
            ll j= lower_bound(v.begin(),v.end(),m)-v.begin();
            if(mp[v[j]]>0 && i!=j) {
                if((v[i]+v[j])%k==0) {
                    mp[v[j]]--;
                    ans++;
                }
            }
            else mp[v[i]]++;
        }
    }
    cout<<ans*2<<endl;
}

//Bismillahir rahmanir rahim

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    vector<pair<ll,ll>>v;
    for(ll i=b;i<=y;i++) {
        for(ll j=a;j<=x;j++) {
            if(j>i) v.push_back({j,i});
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;

    return 0;
}

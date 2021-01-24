//Bismillahir rahmanir rahim

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
const double PI = acos(-1);
const double eps = 1e-9;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);



int main()
{
    optimize();
    ll n,a,b,mn=1e9,mx=0;
    cin>>n;
    vector<pair<pair<ll,ll>,ll>>v;
    for(int i=1;i<=n;i++) {
        cin>>a>>b;
        v.push_back( { {a,(-1*b)},i } );
        mn= min(mn,a);
        mx=max(mx,b);
    }
    sort(v.begin(),v.end());
    if(v[0].first.first==mn && v[0].first.second== (-1*mx) ) {
        cout<<v[0].second<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}

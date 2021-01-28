#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--) {
        ll n,val,ans=0;
        map<ll,ll>v;
        cin>>n;
        while(n--) {
            cin>>val;
            v[val]++;
            ans= max(v[val],ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
//In the name of ALLAH
//MD Rokan Uddin
//CSE_CU
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    ll a,b;
    cin>>a>>b;
    if((b-a)%2==0) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        for(ll i=a;i<=b;i=i+2) {
        cout<<i<<" "<<i+1<<endl;
    }
    }
    return 0;
}

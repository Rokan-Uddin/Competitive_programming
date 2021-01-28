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
     int x,n=0;
     cin>>x;
     vector<int>a(x);
    for(int i=0;i<x;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<x-2;i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            cout<<"YES"<<endl;
            n=1;
            return 0;
        }
    }
    if(n==0)
    {
       cout<<"NO"<<endl;
    }

    return 0;
}



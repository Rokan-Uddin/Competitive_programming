//In the name of ALLAH
//MD Rokan Uddin
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool check(long long n)
{
    long long q = n;
    while(q != 0)
    {
        int r = q%10;
        if(r != 0 && n % r != 0)
            return false;
        q = q/10;
    }
    return true;
}
int main()
{
    optimize();
    ll t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        while(check(n)==false) n++;
        cout<<n<<endl;
    }
 
    return 0;
}
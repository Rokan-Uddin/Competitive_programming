//In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int isprime(long long  n) {
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--) {
    long long d,a=0,b=0;
   cin>>d;
   for(int i=1+d;;i++) {
    if(isprime(i) && a==0) a=i, i=i+(d-1);
    else if(isprime(i)) {   b=i; break; }
   }
   cout<<a*b<<endl;
    }

    return 0;
}

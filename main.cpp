
//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


const int MX = 1e6+123;
bitset<MX> is_prime;
vector<int>prime;
void sieve ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }

}
long long NOD (long long n)
{
    long long ret = 1;
    for ( auto p : prime ) {
        if ( 1LL * p * p > n ) break;
        if ( n % p == 0 ) {
            int cnt = 1;
            while ( n % p == 0 ) {
                n /= p;
                cnt++;
            }
            ret *= cnt;
        }
    }
    if ( n > 1 ) ret *= 2;
    return ret;
}
int main()
{
    optimize();
    sieve(1e6);
    ll a,b,c,ans=0;
    cin>>a>>b>>c;
    for(ll i=1;i<=a;i++) {
        for(ll j=1;j<=b;j++) {
            for(ll k=1;k<=c;k++) ans += NOD(i*j*k);
        }
    }
    cout<<ans<<endl;
    return 0;
}

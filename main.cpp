//In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e6+123;
bool is_prime[mx];
vector<int> prime;
void primeGen ( int n )
{
    n+=100;
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
int main()
{
    optimize();
    int n;
    cin>>n;
    primeGen(n);
    if(n<3) cout<<1<<endl;
    else cout<<2<<endl;
    for(int i=2;i<=(n+1);i++) {
      if(is_prime[i]==1) cout<<1<<" ";
      else cout<<2<<" ";
    }
    cout<<endl;
    
}
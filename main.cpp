//https://atcoder.jp/contests/dp/tasks/dp_a
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e5+123;
int h[mx], n;
int dp[mx];

int solve ( int i )
{
    if ( i == n ) return 0;
    if ( dp[i] != -1 ) return dp[i];

    int ret1 = 2e9, ret2 = 2e9;

    if ( i+1 <= n ) ret1 = abs ( h[i] - h[i+1] ) + solve ( i+1 );
    if ( i+2 <= n ) ret2 = abs ( h[i] - h[i+2] ) + solve ( i+2 );

    dp[i] = min ( ret1, ret2 );
    return dp[i];
}


int main()
{

    cin >> n;
    for ( int i = 1; i <= n; i++ ) cin >> h[i];

    memset ( dp, -1, sizeof ( dp ) );
    cout << solve ( 1 ) << endl;

    return 0;
}
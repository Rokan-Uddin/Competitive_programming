//https://atcoder.jp/contests/dp/tasks/dp_c
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e5+123;
int dp[mx][4], n;
int a[mx][4];

int solve ( int i, int f1 )
{
    if ( i > n ) return 0;
    if ( dp[i][f1] != -1 ) return dp[i][f1];

    int ret = 0;
    for ( int j = 1; j <= 3; j++ ) {
        if ( j != f1 ) {
            ret = max ( ret, a[i][j] + solve ( i+1, j ) );
        }
    }

    return dp[i][f1] = ret;
}

int main()
{
    cin >> n;
    for ( int i = 1; i <= n; i++ ) cin >> a[i][1] >> a[i][2] >> a[i][3];

    memset ( dp, -1, sizeof (dp) );
    cout << solve ( 0, 0 ) << endl;
    
}
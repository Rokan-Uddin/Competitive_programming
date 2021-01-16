#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
typedef long long ll;
const ll infLL = 9000000000000000000;

const int mx = 1e3+123;
int a[mx], n;

bool check ( ll val )
{
    for ( int i = 1; i <= n; i++ ) {
        val += a[i];
        if ( val <= 0 ) return 0;
    }

    return 1;
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- ) {

        cin >> n;
        for ( int i = 1; i <= n ; i++ ) cin >> a[i];

        ll l = 0, r = 10e10+123;

        ll ans = infLL;
        while ( l <= r ) {
            ll mid = ( l + r ) >> 1;

            if ( check( mid ) ) {
                ans = min ( ans, mid );
                r = mid-1;
            }
            else l = mid+1;
        }

        cout << ans << endl;
    }

    return 0;
}
// In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > ordered_set;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
const int mx = 2e5+123;
long long a[mx], sum[mx];
int main()
{
    long long n, t;
    cin >> n >> t;
    for ( int i = 1; i <= n; i++ ) cin >> a[i];
    for ( int i = 1; i <= n; i++ ) sum[i] = a[i] + sum[i-1];
    
    map<long long, int> c;
    ordered_set ps;
    
    ps.insert ( 0 );
    c[0]++;
    
    long long ans = 0;
    for ( int i = 1; i <= n; i++ ) {
        ans += ( i - ps.order_of_key(sum[i]-t) - c[sum[i]-t] );
        ps.insert ( sum[i] );
        c[sum[i]]++;
    }
    cout << ans << endl;
    return 0;
}
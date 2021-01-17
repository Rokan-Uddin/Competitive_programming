#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ ) {
        double AB, AC, BC, R;

        cin >> AB >> AC >> BC >> R;

        double l = 0, r = AB;

        for ( int i = 0; i < 100; i++ ) {
            double AD = ( l + r ) / 2.0;
            double x = AD / AB;

            double AE = AC * x;
            double DE = BC * x;

            double pABC = ( AB + BC + AC ) / 2;
            double pADE = ( AD + AE + DE ) / 2;

            double areaTriABC =  sqrt ( pABC * ( pABC - AB ) * ( pABC - AC ) * ( pABC - BC ) );
            double areaTriADE =  sqrt ( pADE * ( pADE - AD ) * ( pADE - AE ) * ( pADE - DE ) );

            double areaTra = areaTriABC - areaTriADE;

            if ( R < ( areaTriADE / areaTra ) ) r = AD;
            else l = AD;
        }

        fraction();
        cout << "Case " << tc << ": " << l << endl;
    }

    return 0;
}
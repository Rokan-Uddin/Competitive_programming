//In the name of ALLAH

#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
#define endl '\n'
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--) {
        int n,val,a=0;
        cin>>n;
        vector<int>v;
        string s;
        cin>>s;
        for(int i=0;i<n;i++) {
                if(s[i]=='0') val=0;
                else val=1;
            if( !v.empty()) {
                if(val== 1) {
                    if(a==2) v.push_back(0);
                    else if(a==1 || a==0) v.push_back(1);
                }
                else if(val==0) {
                    if(a==2 || a==0) v.push_back(1);
                    else if(a==1) v.push_back(0);
                }
            }
            else {
                v.push_back(1);
            }
             a= val+v[i];
        }
        for(int i=0;i<n;i++) cout<<v[i];
        cout<<endl;
    }


    return 0;
}

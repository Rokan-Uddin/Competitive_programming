#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

double getPQ(double m,double n) {
  return sqrt((m*m)-(n*n));
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for(int j=1;j<=t;j++) {
      double x,y,c;
      cin>>x>>y>>c;
      double l=0,r=x;
      for(int i=0;i<100;i++) {
        double mid=(l+r)/2;
        double p =getPQ(x,mid);
        double q= getPQ(y,mid);
        double cc = 1/((1/p)+(1/q));
        if(cc>c) l=mid;
        else r=mid;
      }
      fraction();
      cout<<"Case "<<j<<": "<<l<<endl;
 }
}
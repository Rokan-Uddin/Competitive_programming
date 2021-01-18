#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--) {
      int n,val;
      map<int,int>m;
      m.clear();
      cin>>n;
      int  ta=0;
      for(int i=0;i<n;i++) {
        cin>>val;
        m[val]++;
        ta= max(m[val],ta);
      }
      int tb=m.size()-1;
      int ans=0;
      if(tb<(ta-1)) ans= tb+1;
      else if(tb>ta) ans= ta;
      else ans =tb;
      cout<< ans <<endl;
         
    }
    return 0;
}
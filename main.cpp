#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--) {
      long long n,val;
      set<long long>s;
      cin>>n;
      for(int i=0;i<n;i++) {
        cin>>val;
        s.insert(val);
      }
      if(s.size()==n) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    return 0;
}
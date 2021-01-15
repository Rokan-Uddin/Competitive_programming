#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
  optimize();
  int n,q;
  cin>>n>>q;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  while(q--) {
    int val;
    cin>>val;
    int lo= lower_bound(v.begin(), v.end(), val)-v.begin();
    if(!binary_search(v.begin(),v.end(), val)) cout<<"-1"<<endl;
    else cout<<lo<<endl;
  }
}
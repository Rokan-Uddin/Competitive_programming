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
      long long n,x,mxs=0,mns=0,val;
      cin>>n>>x;
      for(int i=0;i<n;i++) {
        cin>>val;
        mns += val;
        mxs += (val/x);
        if(val % x !=0) mxs++;
      }
      if(mns%x != 0) mns= (mns/x)+1;
      else mns=(mns/x);
      cout<<mns<<" "<<mxs<<endl; 
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;
    string s;
    cin>>t;
    while(t--) {
      cin>>s;
      int mx=0,l=0,r=0;
      for(int i=0;i<s.size();i++) {
        if(s[i]=='L') l++, r=0;
        else if(s[i]=='R') r++,l=0;
        mx=max(l,mx);
      }
      cout<<mx+1<<endl;
    }
    return 0;
}
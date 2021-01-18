#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int n;
    string s;
     string v;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++) {
      if(v.size() %2==0 || v.back() != s[i]) v.push_back(s[i]);
    }
    if(v.size() %2==1) v.pop_back();
    cout<<n-v.size()<<endl<<v<<endl;
    return 0;
}
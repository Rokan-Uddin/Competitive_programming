//In the name of ALLAH
//MD Rokan Uddin
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
    cin>>n;
    cin>>s;
    vector<char>v;
    v.push_back(s[0]);
    for(int i=1;i<n;i++) {
        if(i%2 !=0) v.insert(v.begin(),s[i]);
        else v.push_back(s[i]);
    }
    if(n%2==0) reverse(v.begin(),v.end());
    for(auto u:v) cout<<u;
    cout<<endl;
    return 0;
}

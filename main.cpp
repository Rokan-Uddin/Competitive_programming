//In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e7+123;
int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int>divisor[n];
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = i; j <= n; j += i ) {
            divisor[j].push_back(i);
        }
    }
    for(int i=1;i<=n;i++) {
      cout<<i<<":->";
      for(auto u:divisor[i]) cout<<u<<" ";
      cout<<endl;
    }
    
}
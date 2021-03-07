/** In the Name of ALLAH */
 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
int dx[] = {0, 0, +1, -1, +1, +1, -1, -1};
int dy[] = {+1, -1, 0, 0, +1, -1, +1, -1};
 
inline ll gcd ( ll a, ll b ) { return __gcd (a, b); }
inline ll lcm ( ll a, ll b ) { return ( a * ( b / gcd (a, b) ) ); }
 
vector<int>v[11];
int l[11];
int vis[11];
int par[11];
void bfs(int x) {
  vis[x]=1;
  l[x]=0;
  queue<int>q;
  q.push(x);
  while(!q.empty()) {
    int t=q.front();
    q.pop();
    for(int i=0;i<v[t].size();i++) {
      if(vis[v[t][i]]== -1) {
        vis[v[t][i]]=1;
        q.push(v[t][i]);
        l[v[t][i]]= l[t]+1;
        par[v[t][i]]=t;
      }
    }
  }
}
void path(int m) {
  if(m==1) return ;
  cout<<par[m]<<" ";
  path(par[m]);

}
int main()
{
  optimize();
  int n,k;
  cin>>n>>k;
  for(int i=0;i<k;i++) {
    int x,y;
    cin>>x>>y;
    v[x].PB(y);
    v[y].PB(x); 
  }
  mem(vis,-1);
  bfs(1);
  path(5);
}
// 1 2
// 1 3
// 1 4
// 2 6
// 4 7
// 3 7
// 3 8
// 8 5
// 5 10
// 9 10
// 6 10
// 7 9
// 7 8

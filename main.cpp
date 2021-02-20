/** In the Name of ALLAH */
//https://lightoj.com/problem/curious-robin-hood

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

int ar[100001];
int tree[100001*3];
void init(int node,int b,int e) {
  if(b==e) {
    tree[node]=ar[b];
    return  ;
  }
  int left= node*2;
  int right= node*2 + 1;
  int mid= (b+e)/2;
  init(left,b,mid);
  init(right,mid+1,e);
  tree[node]= (tree[left]+tree[right]);
}
int query(int node,int b,int e,int i,int j) {
  if(i>e || j<b) return 0;
  if(b>=i && e<=j) return tree[node];
  int left= node*2;
  int right = node*2 + 1;
  int mid= (b+e)/2;
  int q1 = query(left,b,mid,i,j);
  int q2= query(right,mid+1,e,i,j);
  return (q1+q2);
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; 
    if (b >= i && e <= i) { 
         tree[node] = newvalue;
        return;
    }
    int Left = node * 2; 
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{
	optimize();
  int T;
  cin>>T;
  for(int tc=1;tc<=T;tc++) {
  int n,m,l,r,u;
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>ar[i];
  mem(tree,-1);
  init(1,1,n);
  cout<<"Case "<<tc<<":"<<endl;
  while(m--) {
    int type;
    cin>>type;
    if(type==1) {
      cin>>u;
      cout<<query(1,1,n,(u+1),(u+1))<<endl;
      update(1,1,n,(u+1),0);
    }
    else if(type==2) {
      cin>>l>>r;
      r += query(1,1,n,(l+1),(l+1));
      update(1,1,n,(l+1),r);
    }
    else if(type==3) {
      cin>>l>>r;
      cout<<query(1,1,n,(l+1),(r+1))<<endl;
    }
  }
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define PB push_back
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
int n;
	cin >> n;
	vector<pair<int,int>> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].first, v[i].second = i + 1;
 
	sort(v.begin(),v.end(), greater<pair<int,int>>());
	int s = 1;
	for (int i = 1; i < n; i++) {
		s = s + (v[i].first * i) + 1;
	}
	cout<<s<<endl;
	for (int i = 0; i < n; i++)
		cout << v[i].second << " ";
	cout << endl;
    return 0;
}

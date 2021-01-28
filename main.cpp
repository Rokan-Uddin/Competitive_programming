#include <bits/stdc++.h>
using namespace std;
#define optimize() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define endl "\n"
int main(){
    optimize();
        string s;
        cin >> s;
        ll ans = 0;
        while(s.size() != 1){
            ans++;
            ll sum = 0;
            for(char c: s){
                sum += c - '0';
            }
            s = to_string(sum);
        }
        cout << ans << endl;
}

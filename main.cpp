//In the name of ALLAH
//MD Rokan Uddin
#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int dp[10001];
int fn(int n) {
    
    if (n == 0) return a% 10000007;
    if (n == 1) return b% 10000007;
    if (n == 2) return c% 10000007;
    if (n == 3) return d% 10000007;
    if (n == 4) return e% 10000007;
    if (n == 5) return f% 10000007;
    if(dp[n] != -1) return dp[n]% 10000007;
    dp[n]=fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
    return dp[n]% 10000007;
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
         for(int i=0;i<10001;i++) dp[i]=-1;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n));
    }
    return 0;
}
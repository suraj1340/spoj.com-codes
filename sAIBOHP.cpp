//wrong answer
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll lcs(string s1, string s2, ll n){
    ll dp[n+1][n+1];
    ll i,j;
    for(i=0;i<=n;i++)   dp[i][0]=0;
    for(i=1;i<=n;i++)   dp[0][i]=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(s1[i]==s2[j])    dp[i][j]=dp[i-1][j-1]+1;
            else    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][n];
}

int main()
{
    ll t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        string rs=s;
        reverse(rs.begin(), rs.end());
        ll n=s.length();
        ll l= lcs(s,rs,n);
        cout<<n-l<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    char s[5001];
    while(1){
        cin>>s;
        if(s[0]=='0')  return 0;
        ll l=strlen(s);
        ll dp[l+1];
        dp[0]=1;
        dp[1]=1;
        for(ll i=2;i<=l;i++){
            dp[i]=0;
            if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6')) dp[i]+=dp[i-2];
            if(s[i-1]!='0')   dp[i]+=dp[i-1];
        }
        cout<<dp[l]<<endl;
    }
    return 0;
}

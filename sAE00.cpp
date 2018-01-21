#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=1;i*i<=n;i++)
        ans+=(n/i-i+1);
    cout<<ans<<endl;
    return 0;
}

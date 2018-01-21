#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    int i,j,k;
    vector<int> v1,v2;
    for(i=0;i<n;i++)    cin>>x[i];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                v1.push_back(x[i]*x[j]+x[k]);
            }
        }
    }
    for(i=0;i<n;i++){
        if(x[i]==0) continue;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                v2.push_back(x[i]*(x[j]+x[k]));
            }
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int s=v2.size();
    int lb,ub,ans=0;
    for(i=0;i<s;i++){
        lb=lower_bound(v1.begin(),v1.end(),v2[i])-v1.begin();
        ub=upper_bound(v1.begin(),v1.end(),v2[i])-v1.begin();
        ans+=(ub-lb);
        //cout<<lb<<" "<<ub<<endl;
    }
    cout<<ans;

    return 0;
}

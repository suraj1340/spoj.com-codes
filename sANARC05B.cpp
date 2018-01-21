#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll bs(vector<ll>v,ll s,ll e, ll x){
    if(s>e)     return -1;
    ll mid=s+(e-s)/2;
    if(v[mid]==x)   return mid;
    if(v[mid]>x)    return bs(v,s,mid-1,x);
    return bs(v,mid+1,e,x);
}

int main()
{
    ll i,j,k;
    while(1){
        ll n1,n2;
        cin>>n1;
        if(!n1) break;
        vector<ll> v1(n1);
        for(i=0;i<n1;i++)    cin>>v1[i];
        cin>>n2;
        vector<ll> v2(n2);
        for(i=0;i<n2;i++)   cin>>v2[i];
        ll s1,s2,s,idx;
        j=0;
        s1=s2=s=0;
        for(i=0;i<n1;i++){
            idx=bs(v2,0,n2-1,v1[i]);

                s1+=v1[i];

            if(idx!=-1){
                for(;j<=idx;j++) s2+=v2[j];
                s+=max(s1,s2);
                s1=s2=0;
            }
        }
        for(;j<n2;j++)  s2+=v2[j];
        s+=max(s1,s2);
        cout<<s<<endl;
    }
    return 0;
}

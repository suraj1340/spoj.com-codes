#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    ll N;
    cin>>t;
    ll i,j,k;
    while(t--){
        cin>>N>>k;
        ll a[N];
        for(i=0;i<N;i++){
            cin>>a[i];
        }
        sort(a, a+N);
        ll min_d=INT_MAX;
        for(i=k-1;i<N;i++){
            min_d=min(min_d,a[i]-a[i-k+1]);
            if(min_d==0)    break;
        }
        cout<<min_d<<endl;
    }
    return 0;
}

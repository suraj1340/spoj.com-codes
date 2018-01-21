#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s1, s2;
    int i,j,k;
    while(cin>>s1){
        cin>>s2;
        int l1=s1.length();
        int l2=s2.length();
        int dp[l1+1][l2+1];
        char lcs[l1+1][l2+1];
        for(i=0;i<=l1;i++){
            dp[i][0]=0;
            lcs[i][0]='>';
        }
        for(j=1;j<=l2;j++){
            dp[0][j]=0;
            lcs[0][j]='>';
        }
        for(i=1;i<=l1;i++){
            for(j=1;j<=l2;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    lcs[i][j]='#';
                }
                else{
                    if(dp[i-1][j]>dp[i][j-1]){
                        dp[i][j]=dp[i-1][j];
                        lcs[i][j]='|';
                    }
                    else{
                        dp[i][j]=dp[i][j-1];
                        lcs[i][j]='>';
                    }
                }
            }
        }
        string c="";
        i=l1;
        j=l2;
        while(i>0 && j>0){
            if(lcs[i][j]=='#'){
                c=s1[i-1]+c;
                i--;
                j--;
            }
            else if(lcs[i][j]=='>') j--;
            else i--;
        }
        //cout<<c<<endl;
        i=0,j=0,k=0;
        string ans="";

        while(i<dp[l1][l2]){
            while(j<l1 && s1[j]!=c[i]){
                ans+=s1[j];
                j++;
            }
            while(k<l2 && s2[k]!=c[i]){
                ans+=s2[k];
                k++;
            }
            ans+=c[i];
            j++;
            k++;
            i++;
        }
        while(j<l1) ans+=s1[j++];
        while(k<l2) ans+=s2[k++];
        cout<<ans<<endl;
    }
    return 0;
}

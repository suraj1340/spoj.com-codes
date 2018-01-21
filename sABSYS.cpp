#include <bits/stdc++.h>

using namespace std;

int toint(string s){
    int l=s.length();
    int x=0;
    int i=0;
    while(i<l){
        x=x*10+(s[i]-'0');
        i++;
    }
    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int cs;
        string s;
        cin>>s;
        int a, b,c;
        string temp;
        int l=s.length();
        int i=0,j,k;
        while(s[i]!='+'){
            if(s[i]==' '){
                i++;
                continue;
            }
            if(s[i]<'0' || s[i]>'9')  break;
            temp+=s[i];
            i++;
        }
        //cout<<"1st\n";
        if(s[i]!='+'){
            cs=1;
            while(s[i]!='+')    i++;
        }
        else{
            a=toint(temp);
            //cout<<"here?\n";
        }
        i++;
        temp="";
        while(s[i]!='='){
            if(s[i]==' '){
                i++;
                continue;
            }
            if(s[i]<'0' || s[i]>'9')  break;
            temp+=s[i];
            i++;
        }
        //cout<<"2nd\n";
        if(s[i]!='='){
            cs=2;
            while(s[i]!='=')    i++;
        }
        else{
            b=toint(temp);
        }
        i++;
        temp="";
        while(i<l){
            if(s[i]==' '){
                i++;
                continue;
            }
            if(s[i]<'0' || s[i]>'9')  break;
            temp+=s[i];
            i++;
        }
        //cout<<"3rd\n";
        if(i!=l){
            cs=3;
        }
        else{
            c=toint(temp);
        }
        if(cs==1){
            cout<<c-b<<'+'<<b<<'='<<c<<endl;
        }
        else if(cs==2)    cout<<a<<'+'<<c-a<<'='<<c<<endl;
        else cout<<a<<'+'<<b<<'='<<a+b<<endl;
    }
    return 0;
}

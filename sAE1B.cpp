#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,k,s;
	cin>>n>>k>>s;
	k*=s;
	int a[n];
	for(int i=0;i<n;i++)	cin>>a[i];
	sort(a, a+n, greater<int>());
	int i;
	for( i=0;i<n;i++){
		k-=a[i];
		if(k<=0)break;
	}
	(i==n) ? cout<<n : cout<<i+1;
	cout<<endl;
	return 0;
}

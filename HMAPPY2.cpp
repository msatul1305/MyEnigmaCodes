#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
using ll=long long;
ll n,a,b,k,ans,tst,c;
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>tst;
	while(tst--)
	{
		cin>>n>>a>>b>>k;
		ans=0;
		c=(a*b)/__gcd(a,b);
		ans=(n/a)+(n/b)-2*(n/c);
		if(ans>=k)
			cout<<"Win\n";
		else
			cout<<"Lose\n";
	}
}

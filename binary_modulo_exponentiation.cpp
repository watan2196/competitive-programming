#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,x;
int bexp(int x,int n,int mod);
//binary modular exponentiation
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>x>>n;
	   int res=bexp(x,n,mod);

cout<<res<<endl;

	return 0;
}

int bexp(int x,int n,int mod)
{
	if(n==0)
	return 1;
	else if(n%2==0)
	return bexp((x*x)%mod,(n/2),mod);
	else 
	return (x*bexp((x*x)%mod,(n-1)/2,mod))%mod;
}

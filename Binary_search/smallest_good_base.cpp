#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// sum of n terms in GP
int i,j,n,cnt,res,m,t,r,s,ans;
int sgp(int r,int n);
int power(int r,int n);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>r>>n;
	   
	   
	   res=sgp(r,n);
	   
	   cout<<res<<endl;


	return 0;
}


int sgp(int r,int n)
{
	s=0;
	ans=power(r,n);
	s=(ans-1)/(r-1);
	
	return s;	
}

int power(int r,int n)
{
	if(n==0)
	return 1;
	else
	return (n&1)?r*power((r*r),(n-1)>>1):power((r*r),n>>1);
}

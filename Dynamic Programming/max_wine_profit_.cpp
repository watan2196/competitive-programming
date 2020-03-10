#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//max profit by selling the wines...
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,s,e,y;
(int)int dp[1005][1005];
vector<int>a;
int profit(int s,int e);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   memset(dp,-1,sizeof(dp));
	   
	   cin>>n;
	   a.resize(n);
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   for(auto it:a)
	   cout<<it<<" ";
	   cout<<endl;
	   
	   int res=profit(0,n-1);

	   cout<<res<<endl;
	return 0;
}
int profit(int s,int e)
{
	if(dp[s][e] != -1)
	return dp[s][e];
	else
	{
		y=n-s-e;
		dp[s][e]=max(a[s]*y + profit(s+1,e), a[e]*y + profit(s,e-1));
		return dp[s][e];
	}
}

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Array description
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b;
int solve(vector<int> &v,int m)
{
	int n=v.size();
	int dp[n+2][m+2];
	
	memset(dp,0,sizeof(dp));
	
	for(int i=1;i<=n;i++)
	{
		for(int x=1;x<=m;x++)
		{
			if(i == 1) //base case when there is one element
			{
				if(v[i-1] == 0 || v[i-1]==x)
				dp[i][x]=1;
				else
				dp[i][x]=0;
			}
			else
			{
				if(v[i-1] == 0 || v[i-1] == x)
				{
				dp[i][x] = ((dp[i-1][x-1] + dp[i-1][x])%mod + dp[i-1][x+1])%mod;	
				}
				else
				dp[i][x]=0;
			}
		}
	}
	
	
	int ans=0;
	
	for(int x=1;x<=m;x++)
	{
		ans=(ans + dp[n][x])%mod;
	}
	
	return ans;
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
		
		cin>>n>>m;
		
		vector<int>v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		
		cout<<solve(v,m)<<endl;
	   

	return 0;
}


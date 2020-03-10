#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//minimum cost path from (0,0) to (n-1,m-1)
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;
vector<vector<int>>dp,a;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>m;
	   
	   a.resize(n);
	   for(i=0;i<n;i++)
	   a[i].resize(m);
	   
	   for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	   cin>>a[i][j];
	   
	   
	   //DP table build
	   dp.resize(n);
	   for(i=0;i<n;i++)
	   dp[i].resize(m);
	   
	   dp[0][0]=a[0][0];
	   
	   i=1;
	   while(i<n)
	   {
	   	dp[i][0]=dp[i-1][0] + a[i][0];
	   	i++;
	   }
	   
	   j=1;
	   while(j<m)
	   {
	   	dp[0][j]=dp[0][j-1]+a[0][j];
	   	j++;
	   }
	   
	   for(i=1;i<n;i++)
	   {
	   	for(j=1;j<m;j++)
	   	{
	   		dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) + a[i][j];
		   }
	   }
	   
	   for(i=0;i<n;i++)
	   {
	   	for(j=0;j<m;j++)
	   cout<<dp[i][j]<<" ";
	   cout<<endl;
	   }
	   
//	   cout<<dp[n-1][m-1];
	   
	return 0;
}


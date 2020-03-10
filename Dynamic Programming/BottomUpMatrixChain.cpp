#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//MatrixChainMultiplication........
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,t,k;
vector<int>m;
int dp[100][100];

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n;
	   m.resize(n);
	   memset(dp,-1,sizeof(dp));
	   for(i=0;i<n;i++)
	   cin>>m[i];
	   
	   //base case matrix chain of size 1 =0
	   for(i=0;i<n;i++)
	   dp[i][i]=0;
	   
	   for(int l=2;l<n;l++)
	   {
	   	for(int i=1;i<=n-l;i++)
	   	{
	   		j=i+l-1;
	   		dp[i][j]=INT_MAX;
	   		for(k=i;k<j;k++)
	   		{
	   			dp[i][j]=min(dp[i][j],dp[i][k] + dp[k+1][j] +m[i-1]*m[k]*m[j]);
			   }
		   }
	   }
	   cout<<dp[1][n-1];
	return 0;
}


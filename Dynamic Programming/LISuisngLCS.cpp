#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//LIS using LCS
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;
vector<int>a,b;
vector<vector<int>>dp;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n;
	   a.resize(n);
	   b.resize(n);
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   b=a;
	   dp.resize(n+1);
	   for(i=0;i<n+1;i++)
	   dp[i].resize(n+1);
	   
	   sort(b.begin(),b.end());
	   
	   for(i=1;i<=n;i++)
	   {
		   	for(j=1;j<=n;j++)
		   	{
		   		if(a[i-1] == b[j-1])
		   		dp[i][j]=1+ dp[i-1][j-1];
		   		else
		   		dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		    }
	   }
	   
	   for(i=0;i<=n;i++)
	   {
	   	for(j=0;j<=n;j++)
	   	cout<<dp[i][j]<<" ";
	   	cout<<endl;
	   }
	   cout<<dp[n-1][n-1]<<endl;

	return 0;
}


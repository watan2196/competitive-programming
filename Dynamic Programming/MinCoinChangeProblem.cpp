#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
//minimum no of coins to make a sum x
int i,j,n,cnt,res,m,t,x;
vector<int>coins;

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   coins.resize(n);
	   for(i=0;i<n;i++)
	   cin>>coins[i];
	   
	   cin>>x;
	   
	   int *dp=new int[x+1];
	   
	   
	   dp[0]=0;//basecases (min 0 coins needed to make a sum 0)
	   
	   //compute dp[i] , answer for all values of i by iteratively
	   for(i=1;i<=x;i++)
	   {
	   	dp[i]=INT_MAX;
	   	for(j=0;j<coins.size();j++)
	   	{
	   		if(i-coins[j]>=0)
	   		dp[i]=min(dp[i],dp[i-coins[j]] + 1);
		   }
	   }
	   
	   
	   cout<<dp[x]<<endl;

	return 0;
}


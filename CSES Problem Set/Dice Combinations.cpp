#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Dice combinations
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b;

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
		
		cin>>n; //dp[i] states the min no of ways to make a sum i by rolling the dice from 1 to 6
		
		int dp[n+1];
		memset(dp,0,sizeof(dp));
		
		dp[0]=1;// base case is the no of ways to make a sum =0 using no dice
	   
	   for(int i=1;i<=n;i++)
	   {
	   	for(int x=1;x<=6;x++)
	   	{
	   		if(x>i) break;
	   		else
	   		dp[i]=(dp[i] + dp[i - x]) % mod;
		   }
	   }
	
	cout<<dp[n]<<endl;
	return 0;
}


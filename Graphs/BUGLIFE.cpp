#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//BugLife spoj
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b,test;
bool flag;
vector<int>g[N];
bool vis[N];
bool col[N];
bool dfs(int start,int c);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   
	   cin>>t;
	   
		   for(int test=1;test<=t;test++)
		   {
			   cin>>n>>m;	
			   for(int i=1;i<=n;i++)
			   {
			   g[i].clear();
			   vis[i]=0;
			   }
			   
			   for(i=1;i<=m;i++)
			   {
			   	cin>>a>>b;
			   	g[a].push_back(b);
			   	g[b].push_back(a);
			   }
			   
		   	   bool flag = true;
		   	   
			   for(int i=1;i<=n;i++)
				{
				   if(!vis[i])	
				   {
					   bool ans=dfs(i,0);
					   
					   if(ans == false)
					   flag=false;
				   }
			    }
			   	   cout<<"Scenario #"<<test<<":"<<endl;
					   
				   if(flag == false)
				   cout<<"Suspicious bugs found!"<<endl;
				   else
				   cout<<"No suspicious bugs found!"<<endl;
	   }

	return 0;
}
bool dfs(int start,int c)
{
	vis[start]=1;
	col[start]=c;
	for(int v:g[start])
	{
		if(!vis[v])
		{
			bool ans=dfs(v,c^1);
			if(ans == false)
			return false;
		}
		else
		{
			if(col[start] ==  col[v])
			return false;
		}
	}
	return true;
}

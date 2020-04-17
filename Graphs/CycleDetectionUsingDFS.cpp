#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//cycle detection in graph using back edge...
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b,ans;

vector<int>g[N];
bool vis[N];
bool dfs(int start,int parent);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>m;
	   for(i=0;i<m;i++)
	   {
	   	cin>>a>>b;
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }
	   
	   bool flag=false;
	   for(int i=1;i<=n;i++)
	   {
		   	if(vis[i] == 0)
		   	{
		   		bool ans=dfs(i,-1);
		   		if(ans == true)
		   		{
				   flag=true;
				   break;
			    }
		    }
	   }

	   cout<<flag<<endl;

	return 0;
}
bool dfs(int start,int parent)
{
	vis[start]=1;
	for(int v:g[start])
	{
		if(vis[v] == 0)
		{
			if(dfs(v,start) == true)
			return true;
		}
		else
		if(v != parent)
		   return true;
	}
	return false;
}


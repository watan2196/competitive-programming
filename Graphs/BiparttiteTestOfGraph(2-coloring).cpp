#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// check if given graph is bipartite or not ( 2-coloring graph problem)
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b,start;
vector<int>g[N];
bool vis[N];
bool col[N];
bool dfs(int start,int color);
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
	   
	   cin>>start;
	   bool ans=dfs(start,1);
	   for(int i=1;i<=n;i++)
	   cout<<i<<" "<<col[i]<<" ";
	   cout<<endl;
	   cout<<ans<<endl;
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
			if(dfs(v,c^1) == 0)
			return 0;
		}
		else
		if(col[start] == col[v])
		return 0;
		
	}
	return 1;
}

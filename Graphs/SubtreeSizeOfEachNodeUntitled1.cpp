#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// Subtree size of each node in Tree Using DFS
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b;
int dfs(int node);
vector<int>g[N];
int vis[N];
int subtree_sz[N];
// dfs to find the subtree size

int dfs(int node)
{
	vis[node]=1;
	int csz=1;
	for(int v:g[node])
	{
		if(!vis[v])
		{
			csz+=dfs(v);
		}
	}
	subtree_sz[node]=csz;
	return csz;
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   
	   cin>>n;
	   
	   
	   for(i=0;i<n-1;i++)
	   {
	   	cin>>a>>b;
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }
	   
	   
	   dfs(1);
	   
	   for(int j=1;j<=n;j++)
	   cout<<subtree_sz[j]<<" ";
	   
	   

	return 0;
}

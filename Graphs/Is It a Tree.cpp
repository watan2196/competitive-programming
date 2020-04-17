#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// Check if given graph is tree or not

// for a graph to be a tree should have 1 connected component and no of edges should be exactly n-1(no cycle)
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b;
vector<int>g[N];
bool vis[N];
int cc();
void dfs(int start);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>m;
	   //input of graph
	   for(i=0;i<m;i++)
	   {
	   cin>>a>>b;
	   g[a].push_back(b);
	   g[b].push_back(a);
	   }
	    cnt=0;
		for(i=1;i<=n;i++)
		{
			if(!vis[i])
			{
			dfs(i);
			cnt++;
		    }
		}
	   	
		if(cnt == 1 && m==(n-1))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;


	return 0;
}
void dfs(int start)
{
	vis[start]=1;
	for(int v:g[start])
	{
		if(!vis[v])
		dfs(v);
	}
}

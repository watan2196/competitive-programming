#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b,start;
vector<int>g[N];
bool vis[N];
void dfs(int node)
{
	vis[node]=1;
	cout<<node<<" ";
	for(auto v:g[node])
	{
		if(vis[v])continue;
		dfs(v);
	}
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n>>m;// no of nodes and no of edges
	   
	   //build the graph
	   while(m--)
	   {
	   	cin>>a>>b;
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }
	   cin>>start;
	   dfs(start);
	return 0;
}


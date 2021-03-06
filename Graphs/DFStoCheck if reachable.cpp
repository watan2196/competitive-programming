#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,a,b,v,m,t,x,y;
vector<int>g[N];
bool vis[N];
void dfs(int node)
{
	vis[node]=1;
	for(int v:g[node])
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
	   cin>>n>>m; // no of nodes and edges
	   
	   while(m--)
	   {
	   	cin>>a>>b;// the edge form u to v
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }
	   
	   //check if y is reachable from x
	   cin>>x>>y;
 	   dfs(x);
 	   if(vis[y])
 	   cout<<"yes"<<endl;
 	   else
 	   cout<<"no"<<endl;


	return 0;
}


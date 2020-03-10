#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Shortest Path using BFS space efficient
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,a,b,x,y,m,t,dis;

vector<int>g[N];
bool vis[N];
int bfs(int node);
queue<int>q;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>m; // no of nodes and edges...
	   while(m--)  // build the graph
	   {
	   	cin>>a>>b;
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }

	   cin>>x>>y;
	   q.push(x);
	   vis[x]=1;
	   res=bfs(x);
	   cout<<res<<endl;
	return 0;
}
int bfs(int node)
{
	int dis=0;if(node == y)return 0;
	while(!q.empty())
	{
		dis+=1;
		int nxtl=q.size();
		for(i=0;i<nxtl;i++)
		{
			int p=q.front();
			q.pop();
			for(int v:g[p])
			{
				if(!vis[v])
				{
					vis[v]=1;
					q.push(v);
				}
				if(v==y)
				return dis;
			}
		}
	}
}

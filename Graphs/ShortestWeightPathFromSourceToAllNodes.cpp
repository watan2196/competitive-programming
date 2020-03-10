#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//shortest path from a given source vertex to every other vertex in a weighted undirected graph
const int N=1e5+5;
const int mod=1e9+7;
vector<queue<int>>vq;
vector<int>vis;
int i,j,n,cnt,res,m,t,a,b,wt,k,s;
vector<pair<int,int>>g[N];
void bfs(int s);
vector<int>dis;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   //input no of nodes and edges
	   cin>>n>>m; // size of the graph
	   dis.resize(n+1);
	   cin>>k; // weight range
	   vis.resize(n+1);
	   for(i=0;i<m;i++) // build the graph
	   {
	   	cin>>a>>b>>wt;
	   	g[a].push_back(make_pair(b,wt));
	   	g[b].push_back(make_pair(a,wt));
	   }
	   
//	   for(i=0;i<n;i++) // display the graph
//	   {
//	   	for(j=0;j<g[i].size();j++)
//	   	cout<<i<<"->"<<g[i][j].first<<" "<<g[i][j].second<<endl;
//	   }

	   // build the vector of queue to process BFS from given source node to every other node
	   vq.resize(k*n);
	   cin >>s; // source node
	   vis[s]=1;
	   bfs(s);
	   
	   for(i=1;i<dis.size();i++)
	   {
	   	cout<<i<<" "<<dis[i]<<endl;
	   }
	   
	return 0;
}
void bfs(int s)
{
	vq[0].push(s);
	for(i=0;i<k*n;i++)
	{
		while(!vq[i].empty())
		{
			int node=vq[i].front();
			vq[i].pop();
			
			for(pair<int,int> v:g[node])
			{
				if(!vis[v.first])
				{
					vis[v.first]=1;
					vq[i+v.second].push(v.first);
					dis[v.first]=i+v.second;
				}
			}
		}
	}
}

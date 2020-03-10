#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
//Shortest path between two nodes
int i,j,n,cnt,res,a,b,x,y,m,t;
vector<int>g[N];
bool vis[N];
queue<pair<int,int>>q;
vector<int>dis;
void bfs(int x);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n>>m;
	   dis.resize(n);
	   while(m--)
	   {
	   	cin>>a>>b;//edges from a to b
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }

	   cout<<"enter the nodes for shortest path x and y"<<endl;
	   cin>>x>>y;
	   q.push(make_pair(x,0));
       vis[x]=1;
	   bfs(x);
	   
	   cout<<dis[y];

	return 0;
}
void bfs(int node)
{
	
	while(!q.empty())
	{
		pair<int,int>p=q.front();
		q.pop();
		int s=p.first;
		int d=p.second;
		for(int v:g[s])
		{
			if(vis[v])continue;
			else
			{
				vis[v]=1;
				q.push(make_pair(v,d+1));
				dis[v]=d+1;
			}
		}
	}
}

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//BFS Implementation...
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,a,b,t,x;
vector<int>g[N];
bool vis[N];
queue<int>q;
void bfs(int x);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>m;
	   while(m--) //built the graph
	   {
	   	cin>>a>>b;// edge from a to b
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }
	   
	   cin>>x;//source  node to start the BFS
	   
	   vis[x]=1;
	   q.push(x);
	   bfs(x);

	return 0;
}
void bfs(int node)
{
	while(!q.empty())
	{
		int p=q.front();
		cout<<p<<" ";
		q.pop();
		for(int v:g[p])
		{
			if(vis[v])continue;
			else
			{
			q.push(v);
			vis[v]=1;
			}
		}
	}
}

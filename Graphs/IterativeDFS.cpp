#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
//DFS implementstion iteratively using stack
int i,j,n,cnt,res,m,t,a,b;
vector<int>g[N];
bool vis[N];
stack<int>st;
void dfs(int s);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>m;
	   memset(vis,0,sizeof(vis));
	   //build the graph
	   for(i=1;i<=m;i++)
	   {
	   	cin>>a>>b;
	   	g[a].push_back(b);
	   	g[b].push_back(a);
	   }
	   vis[0]=1;
	   st.push(0);
	   dfs(0);



	return 0;
}
void dfs(int s)
{
	while(!st.empty())
	{
		cout<<st.top();
		s=st.top();
		
		st.pop();
		for(auto u:g[s])
		{
			if(!vis[u])
			st.push(u);
			vis[u]=1;
		}
	}
}

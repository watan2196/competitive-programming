#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// codechef Fireroute problem 
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b,ans,nd;
vector<int>g[100001];
int vis[100001];
int csize;
void dfs(int node)
{
	vis[node]=1;
	csize++;
	for(int v:g[node])
	{
		if(vis[v] == 0)
		{
			dfs(v);
		}
	}
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
       int t,n,m,a,b;										
	   cin>>t;
	   
	   while(t--)
	   {
		   	cin>>n>>m;
		   	for(int i=0;i<n;i++)
			   {
			   vis[i]=0;
		       g[i].clear();
		       }
	         
	         int cc=0; int ways=1;
		   	 while(m--)
		   	{
		   		cin>>a>>b;
		   		g[a].push_back(b);
		   		g[b].push_back(a);
		    }
			
			
			for(int i=1;i<=n;i++)
			{
				if(vis[i] == 0)
				{
					csize=0;
					dfs(i);
					cc++;
					ways = (ways*csize) % 1000000007;
				}
			}
		   cout<<cc<<" "<<ways<<"\n";
	   }

	return 0;
}

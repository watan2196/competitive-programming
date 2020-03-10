#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//find the shortest path from source S to destination D
//Given a nXm grid  
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,dis,sx,sy,dx,dy,k;

vector<vector<int> >a;
vector<vector<int> >vis;
queue<pair<int,int>>q;
pair<int,int>p;
int bfs(int sx,int sy); 
vector<int>row{-1,0,0,1};
vector<int>col{0,-1,1,0};
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   
	   cin>>n>>m;
	   a.resize(n);
	   for(i=0;i<n;i++)
	   a[i].resize(m);
	   
	   vis.resize(n);
	   for(i=0;i<m;i++)
	   vis[i].resize(m);
	   
	   for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	   cin>>a[i][j];
	   
	   
	   
	   cin>>sx>>sy>>dx>>dy;
	   p=make_pair(sx,sy);
	   vis[sx][sy]=1;
	   q.push(p);
	   
	   res=bfs(sx,sy);
	   cout<<res<<endl;

	return 0;
}
int bfs(int i,int j)
{
	dis=0;
	while(!q.empty())
	{
		dis+=1;
		int nxt=q.size();
		
		for(i=0;i<nxt;i++)
		{
			pair<int,int>crr=q.front();q.pop();
			for(k=0;k<4;k++)
			{
				int r=crr.first+row[k];
				int c=crr.second+col[k];
				
				if((r>=0 && r<n) && (c>=0 && c<m))
				{
					if(!vis[r][c])
					{
						if(a[r][c] == 0)
						{
							vis[r][c]=1;
							p=make_pair(r,c);
							q.push(p);
						}
						if(r==dx && c==dy)
						return dis;
					}
				}
			}
		}
	}
}

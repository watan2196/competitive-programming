#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//https://cses.fi/problemset/task/1192
//No of Rooms
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,b;
vector<vector<char> >a;
int vis[1000][1000];
vector<pair<int,int>>dir{{-1,0},{1,0},{0,1},{0,-1}};
bool Inside(int r,int c)
{
	return ((r>=0 && r<n) && (c>=0 && c<m));
}
void dfs(int si,int sj)
{
	vis[si][sj]=1;
	for(auto d:dir)
	{
		int r=si+d.first;
		int c=sj+d.second;
		if(Inside(r,c) && vis[r][c]==0 && a[r][c]=='.')
		dfs(r,c);
	}
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
		
		cin>>n>>m;
		
		
		a.resize(n);
		for(int i=0;i<n;i++)
		a[i].resize(m);
		
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>a[i][j];
		
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(vis[i][j] == 0 && a[i][j]=='.')
				{
					cnt++;
					dfs(i,j);
				}
			}
		}
		
		cout<<cnt<<endl;   

	return 0;
}


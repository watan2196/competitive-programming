#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,k,r,c;
vector<vector<int>>a,vis;
vector<int>row{-1,0,0,1};
vector<int>col{0,-1,1,0};
void blocks(vector<vector<int>>& a,int i,int j,vector<vector<int>>& vis);
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
	   for(i=0;i<n;i++)
	   vis[i].resize(m);
	   
 	  for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	   cin>>a[i][j];

	   int ans=0;
	   for(i=0;i<n;i++)
	   {
	   	for(j=0;j<m;j++)
	   	{
	   		if(a[i][j] == 1)
	   		{
	   			if(vis[i][j] != 1)
			    {
			    	cout<<i<<" "<<j<<endl;
				blocks(a,i,j,vis);
			    ans++;
				}
		    }
		    else
		    continue;
		   }
	   }

	   cout<<ans<<endl;
	return 0;
}
void blocks(vector<vector<int>>& a,int i,int j,vector<vector<int>>& vis)
{
	vis[i][j]=1;
	
	if(k==5)
	return;
	for(k=0;k<4;k++)
	{
		r=i+row[k];
		c=j+col[k];
		if((r>=0 && r<n) && (c>=0 && c<m) && vis[r][c]!=1 && a[r][c]==1)
		{
		cout<<r<<" "<<c<<endl;
		blocks(a,r,c,vis);
		return;
		}
		else
		continue;
	}
	
}

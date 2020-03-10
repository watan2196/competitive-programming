#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Graph implementation adjancency list
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,a,b,t;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n>>m;// No of vertices and edges
	   vector<int>g[n+1];
	   for(i=1;i<=m;i++) // loop on the no of edges
	   {
	   	cin>>a>>b; //enter the start and destination nodes of an edge
	   	g[a].push_back(b);  // represents edge from a to b
	   	g[b].push_back(a);  //represents edge from b to a ..since edges are bidirected
	   }
	   
	   //lets see the graph
		   for(i=0;i<n+1;i++)
		   {
		   for(j=0;j<g[i].size();j++)
		   cout<<g[i][j]<<" ";
		   cout<<endl;
		   }
	return 0;
}


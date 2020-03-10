#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,m,t,k;
vector<int>a,b,res;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>m;
	   res.clear();
	   a.resize(n);
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   b.resize(m);
	   for(i=0;i<m;i++)
	   cin>>b[i];
	   
	   i=0;j=0;
	   while(i<n || j<m)
	   {
		   	if(i==n && j<m)
		   	{
		   		res.push_back(b[j]);
		   		j++;
		    }
		    else if(i<n && j==m)
		    {
		    	res.push_back(a[i]);
		    	i++;
			}
			else
			{
				if(a[i]<b[j])
				{
					res.push_back(a[i]);i++;
				}
				else
				{
					res.push_back(b[j]);j++;
				}
			}
	   }
	   
	   for(auto it:res)
	   cout<<it<<" ";


	return 0;
}


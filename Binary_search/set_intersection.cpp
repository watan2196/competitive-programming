#include <bits/stdc++.h>
#include <boost/functional/hash.hpp>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;

vector<int>a,b;
unordered_set<std::pair<int,int>,boost::hash< std::pair<int, int>  >s1,s2;
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
	   cin>>a[i];
	   
	   
	   b.resize(m);
	   for(i=0;i<m;i++)
	   cin>>b[i];
	   
	   
	   
	   for(i=0;i<a.size();i++)
	   s1.insert(make_pair(a[i],count(a.begin(),a.end(),a[i])));


	     
	   for(i=0;i<b.size();i++)
	   s2.insert(make_pair(b[i],count(b.begin(),b.end(),b[i])));


	   for(auto it:s1)
	   cout<<it.first<<" "<<it.second<<endl;


	   for(auto it:s2)
	   cout<<it.first<<" "<<it.second<<endl;
	   
	return 0;
}


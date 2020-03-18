#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,k;
vector<int>v;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>k;
	   cnt=0;
	   v.resize(n);
	   for(i=0;i<n;i++)
 	   cin>>v[i];
 	   
 	   sort(v.begin(),v.end());
 	   i=2;
 	   while(i<n)
 	   {
 	   	if((5-v[i])>=k)
 	   	{
			cnt++;
 	   	i+=3;
 	   }
 	   else
 	   i+=3;
 	   }

cout<<cnt<<endl;

	return 0;
}


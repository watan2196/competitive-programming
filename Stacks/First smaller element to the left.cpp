#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// First smaller element to the left
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;
vector<int>a,ans;
stack<int>st;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   a.resize(n);
	   ans.resize(n);
	   
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   n=a.size();
	   st.push(n-1);
	   i=n-2;
	   
	   while(i>=0)
	   {
		   	if(st.empty())
		   	{
		   		st.push(i);
		   		i--;
			 }
			 
			 if(a[i] < a[st.top()])
			 {
			 	ans[st.top()]=a[i];
			 	st.pop();
			 }
			 else
			 {
			 	st.push(i);
			 	i--;
			 }
	   }
	   
	   while(!st.empty())
	   {
	   	ans[st.top()]=-1;
	   	st.pop();
	   }
	   ans[0]=-1;
	   
	   for(auto it:ans)
	   cout<<it<<" ";

	return 0;
}


#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//sort a given stack using another temp stack
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,x,res,m,temp;
stack<int>st1,st2;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n;
	   for(i=1;i<=n;i++)
	   {
	   	cin>>x;
	   	st1.push(x);
	   }
	   
	   cout<<st1.size()<<endl;
	   
	   while(!st1.empty())
	   {
	   	cout<<st1.top();
	   	st1.pop();
	   }
	   
	   
	   st2.push(st1.top());
	   st1.pop();
	   
	   while(!st1.empty())
	   {
		   	temp=st1.top();
		   	st1.pop();
		   	while(!st2.empty() && temp < st2.top())
		   	{
		   		st1.push(st2.top());
		   		st2.pop();
		    }
		    st2.push(temp);
	   }

	   while(!st2.empty());
	   {
	   	cout<<st2.top();
	   	st2.pop();
	   }
	   
	return 0;
}


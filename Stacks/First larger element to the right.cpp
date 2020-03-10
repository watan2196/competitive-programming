#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//given an array of integers ,for every element find the first largest element to its right.
const int N=1e5+5;
const int mod=1e9+7;
vector<int>a,ans;
stack<int>st;
int i,j,n,cnt,res,m,t;

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
	   
	   st.push(0);
	   i=1;
	   while(i<a.size())
	   {
	        if(st.empty())
            {
        	st.push(i);
	        i++;	
            }
		   	if(a[i] <= a[st.top()])
		   	{
		   		st.push(i);
		   		i++;
		    }
			else
			{

				ans[st.top()]=a[i];
				st.pop();
				
	        } 
	   }
	   
	   
		   	while(!st.empty())
		   	{
		   	ans[st.top()]=-1;
			   st.pop();	
		    }
	   
	   
	   for(auto it:ans)
	   cout<<it<<" ";

	return 0;
}


#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,mx;
string ans,s;
unordered_set<char>st;
int32_t main()
{
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
       IOS;

	   cin>>t;
	   for(i=1;i<=t;i++)
	   {
	   	cin>>n;
	   	st.clear();
	   	mx=0;string ans;
		   	for(int k=1;k<=n;k++)
		   	{
		   		getline(cin,s);
		   		
		   		while (s.length()==0 ) 
                getline(cin,s);
                
		   		cnt=0;st.clear();
		   		for(j=0;j<s.length();j++)
		   		{
		   			if(s[j]!=' ')
			   		{
					    if(st.find(s[j]) ==  st.end())
			   			{
			   			cnt++;
					    st.insert(s[j]);	
			   			}
			   		}
			   }
			   if(cnt > mx)
			   {
			   mx=cnt;
			   ans=s;
			   }
			   if(cnt == mx)
			   {
			   	if(s < ans)
			   	ans=s;
			   }
		    }
	    cout<<"Case #"<<i<<": "<<ans<<endl;
	   }


	return 0;
}


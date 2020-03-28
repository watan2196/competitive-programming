#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,ans,m,t,k,res;
string s;
struct node
{
    char data;
    bool terminal;
    int cnt;
    unordered_map<char,node*>child;
    node(char d)
    {
        data=d;
        terminal=false;
        cnt=1;
    }
};
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
    cin>>t;int ans=0;
    for(i=1;i<=t;i++)
    {
        node* root=new node('\0');
        cin>>n>>k;
        ans=0;res=0;
        while(n--)
        {
            cin>>s;
            node* temp=root;
            for(j=0;j<s.length();j++)
            {
                if(temp->child.find(s[j]) != temp->child.end())
                {
                    temp=temp->child[s[j]];
                    temp->cnt=temp->cnt+1;
                    if(temp->cnt == k)
                    {
					ans++;
					res+=ans;
					}
                }
                else
                {
                    node* n=new node(s[j]);
                    temp->child[s[j]]=n;
                    temp=n;
                }
            }
            temp->terminal=true;
        }
        cout<<"Case #"<<i<<": "<<res<<endl;
    }
	return 0;
}


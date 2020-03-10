#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//smallest unique prefix - Trie implementation
const int N=1e5+5;
const int mod=1e9+7;
struct node // build the trie node for the smallest unique prefix string
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

int i,j,n,cnt,m,t,k;
string res;
vector<string>a,ans;
void add(node* root,string s);
string SmallestUniquePrefix(node* root,string w);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n;
	   a.resize(n);
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   
	   node* root=new node('\0'); //initialise the dummy root node of the trie
 	   
 	   //build the trie for the given list of words
	   for(j=0;j<n;j++)
	   {
	   	string s=a[j];
	   	add(root,s);
	   }
	   
	   //process the strings and find the smallest unique prefix for each words
	   for(m=0;m<a.size();m++)
	   {
	   	string w=a[m];
	   	res=SmallestUniquePrefix(root,w);
	   	ans.push_back(res);
	   }
	   
	   for(auto it:ans)
	   cout<<it<<" ";
	   
	return 0;
}
void add(node* root,string s)
{
	node* temp=root;
	for(k=0;k<s.length();k++)
	{
		if(temp->child.find(s[k]) != temp->child.end())
		{
			temp=temp->child[s[k]];
			temp->cnt=temp->cnt+1;
		}
		else
		{
			node* n=new node(s[k]);
			temp->child[s[k]]=n;
			temp=n;
		}
	}
	temp->terminal=true;
}
string SmallestUniquePrefix(node* root,string w)
{
	node* temp=root;
	res="";
	for(i=0;i<w.length();i++)
	{
		if(temp->child.find(w[i]) != temp->child.end())
		{
			temp=temp->child[w[i]];
			if(temp->cnt == 1)
			{
			res=res+w[i];
			return res;
			}	
			else
			res=res+w[i];
		}
	}
	return res;
}

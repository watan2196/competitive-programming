#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Trie implementation
const int N=1e5+5;
const int mod=1e9+7;

struct node
{
	char data;
	bool terminal;
	unordered_map<char,node*>child;
	node(char d)
	{
		data=d;
		terminal=false;
	}
};

int i,j,n,cnt,res,m,t;
vector<string>a;
string w;
void add(node* root,string s);
bool search(node* root,string w);
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
	   
	   cin>>w;
	   
	   node* root=new node('\0');
	   
	   for(j=0;j<a.size();j++)
	   {
	   string s=a[j];
	   cnt=0;
	   cout<<s<<endl;
	   add(root,s);
	   cout<<cnt<<endl;
	   }
	   bool res=search(root,w);
	   
	   cout<<res<<endl;


	return 0;
}
void add(node* root,string s)
{
	node* temp=root;
	for(i=0;i<s.length();i++)
	{
		if(temp->child.find(s[i]) != temp->child.end())
		temp=temp->child[s[i]];
		else
		{
		node* n=new node(s[i]);
		cnt++;
		temp->child[s[i]]=n ;
		temp=n;
		}
	}
	temp->terminal=true;
}
bool search(node* root,string w)
{
	node* temp;
	temp=root;
	for(i=0;i<w.length();i++)
	{
		if(temp->child.find(w[i]) == temp->child.end())
		return false;
		else
		temp=temp->child[w[i]];
	}
	return temp->terminal;
}

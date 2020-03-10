#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// reverse a linked_list...
int i,j,n,cnt,res,m,t,x;
class node{
	public:
		int data;
		node *next;
};
node *temp,*temp1,*cur,*prv,*nxt;
node *head=NULL;
void insert(int val);
void print();
node* reverse(node *head);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   
	   
	   cout<<"Enter the no of nodes"<<endl;
	   cin>>n;
	   
	   for(i=0;i<n;i++)
	   {
	   	cin>>x;
	   	insert(x);
	   }
	   print();
	   
	   cout<<"reversed linked list"<<endl;
	   
	   head=reverse(head);

	   node *temp;
	   temp=head;
	   while(temp != NULL)
	   {
	   	cout<<temp->data<<" ";
	   	temp=temp->next;
	   }

	return 0;
}
void insert(int val)
{
	if(head == NULL)
	{
		temp1=new node();
		temp1->data=val;
		temp1->next=NULL;
		head=temp1;
	}
	else
	{
		temp=head;
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp1=new node();
		temp1->data=val;
		temp1->next=NULL;
		temp->next=temp1;
	}
}
void print()
{
	temp=head;
	while(temp!= NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
node* reverse(node *head)
{
	cur=head;
	prv=NULL;
	while(cur!=NULL)
	{
		nxt=cur->next;
		cur->next=prv;
		prv=cur;
		cur=nxt;
	}
	head=prv;
}


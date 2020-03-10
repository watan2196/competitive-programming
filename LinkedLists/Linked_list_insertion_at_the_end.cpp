#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
//Linked list implementation..
int i,j,n,cnt,res,m,t,x;

struct node
{
	int data;
	node* next;
};

node* head;


void insert(int x);
void print_nodes();



int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	  
	   cout<<"enter the no of nodes"<<endl;
	   cin>>n;
	    head=NULL;
	   for(i=0;i<n;i++)
	   {
	   	cout<<"enter the value"<<endl;
	   	cin>>x;
	   	insert(x);
	   	print_nodes();
	   }


	return 0;
}
void insert(int x)
{
//	if(i==0)
//	{
		node* temp= new node();
		temp->data=x;
		temp->next=head;
		head=temp;
	//}
//	else
//	{
//		node* temp1=head;
//		while(temp1!=NULL)
//		{
//			temp1=temp1->next;
//		}
//		node* temp=new node();
//		temp->data=x;
//		temp->next=NULL;
//		temp1->next=temp;
//	}
}


void print_nodes()
{
	
	node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
}

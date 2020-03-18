#include<iostream>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
	int no;
	struct node *next;
}node;
node *top=NULL;
node *ini(int no)
{
	node *t;
	t=(node*)malloc(sizeof(node));
	t->no=no;
	t->next=NULL;
	top=t;
}
node *push(node *t,int no)
{
	if(t==NULL)
		ini(no);
	else
	{
		node *r;
		r=(node*)malloc(sizeof(node));
		r->no=no;
		r->next=top;
		top=r;
	}
}
int pop(node *t)
{
	if(t==NULL)
		return -1;
	else
	{
		int d;
		d=t->no;
		t=t->next;
		top	=t;
		return d;	
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[100];
		cin>>s;
		top=NULL;
		int l,i,c=0,p;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='(')
			{
				c++;
				push(top,c);
				cout<<c<<" ";
			}
			else if(s[i]==')')
			{
				int d;
				d=pop(top);
				if(d!=-1)
					cout<<d<<" ";
			}
		}
		cout<<endl;
	}
}

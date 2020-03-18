#include<iostream>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
	int d;
	struct node *next;
}node;
node *top=NULL;
node *ini(int d)
{
	node *t;
	t=(node*)malloc(sizeof(node));
	t->d=d;
	t->next=NULL;
	top=t;
}
node *push(node *t,int d)
{
	if(t==NULL)
		ini(d);
	else
	{
		node *t;
		t=(node*)malloc(sizeof(node));
		t->d=d;
		t->next=top;
		top=t;
	}
}
int pop(node *t)
{
	int a;
	a=t->d;
	t=t->next;
	top=t;
	return a;
}
int evaluate(int a,int b,char c)
{
	int d;
	if(c=='+')
		d=b+a;
	else if(c=='-')
		d=b-a;
	else if(c=='*')
		d=b*a;
	else d=b/a;
	return d;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c,l,i,d,a,b;
		char s[100];
		cin>>s;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			c=int(s[i]);
			if(c>=48 && c<=57)
			{
				push(top,c-48);
			}
			else
			{
				a=pop(top);
				b=pop(top);
				d=evaluate(a,b,s[i]);
				push(top,d);
			}
		}
		cout<<top->d<<endl;
	}
}

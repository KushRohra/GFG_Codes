#include<iostream>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,f,g,q,hcf;
		cin>>a>>b;
		if(a<b)
		{
			c=a;
			a=b;
			b=c;
		}
		c=0;
		f=a;
		g=b;
		while(c==0)
		{
			q=f%g;
			if(q==0)
			{
				hcf=g;
				c=1;
			}
			else
			{
				f=g;
				g=q;
			}
		}
		cout<<(a/hcf)+(b/hcf)<<endl;
	}
}

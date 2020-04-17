#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c1=0,c2=0,lohia, gosu, prince;
		cin>>lohia>>gosu>>prince;
		while(prince!=1)
		{
			if(lohia%prince==0)
				c1++,lohia--;
			if(gosu%prince==0)
				c2++,gosu--;
			prince--;			
		}
		cout<<c1<<" "<<c2<<endl;
	}
}

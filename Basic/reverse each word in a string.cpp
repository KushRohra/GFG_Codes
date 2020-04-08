#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i;
		string s,s1,subst="";
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]!='.')
				subst+=s[i];
			else
			{
				string s11=subst;
				subst="";
				reverse(s11.begin(), s11.end());
				s11+='.';	
				s1+=s11;
			}	
		}
		string s11=subst;
		reverse(s11.begin(), s11.end());	
		s1+=s11;
		cout<<s1<<endl;
	}
}
/*
	2
	i.like.this.program.very.much
	pqr.mno
*/

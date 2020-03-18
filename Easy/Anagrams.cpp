{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int u,p=int('a'),l1=s1.length(),l2=s2.length(),i=0,a[26]={0};
		if(l1!=l2)
			cout<<"NO\n";
		else
		{
			while(i<l1)
			{
				u=int(s1[i])-p;
				a[u]++;
				u=int(s2[i])-p;
				a[u]--;
				i++;
			}
			u=0;
			for(i=0;i<26;i++)
			{
				if(a[i]>0)
					cout<<"NO\n",u=1;
				if(u==1)
					break;
			}
			if(u==0)
				cout<<"YES\n";
		}
			
	}
}



using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 int s,d;
		 cin>>d>>s;
		 if(d==0 || s==0)
		    cout<<"-1"<<endl;
		 else
		 {
		     int a[d],i;
    		 for(i=0;i<d;i++)
    		 	a[i]=0;
    		 int f=0;
    		 i=0;
    		 while(f==0 && s>0 && i<d)
    		 {
    		 	if(s>=9)
    		 	{
    		 		s=s-9;
    		 		a[i]+=9;
    		 		i++;
    		 	}   
    		 	else
    		 	{
    		 		a[i]+=s;
    		 		s=0;
    		 		f=1;
        		 	}
	    	 }
	    	 if(s==0)
    		 	f=1;
    		 if(f==0)
    		 	cout<<-1;
    		 else 
    		 {
    		 	for(i=0;i<d;i++)
    		 		cout<<a[i];
    		 }
    		 cout<<endl;
		 }
	}
}

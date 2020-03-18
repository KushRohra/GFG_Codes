{
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
            return 0;
        i++;
    }
    return 1;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<"1 ";
	    vector<int> v;
	    for(int i=2;i<=n;i++)
	    {
	        if(i%2==0)
	        {
	            cout<<"2 ";
	        }
	        else if(isprime(i)==1)
	        {
	            cout<<i<<" ";
	            v.push_back(i);
	        }
	        else
	        {
	            int f=0;
	            for(auto k=v.begin();k!=v.end();k++)
	            {
	                if(i%(*k)==0)
	                {
	                    cout<<*k<<" ";
	                    f=1;
	                }
	                if(f==1)
	                    break;
	            }
	        }
	    }
	    cout<<endl;
	}
}

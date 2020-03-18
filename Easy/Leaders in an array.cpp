int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,a[n],max=INT_MIN;
	    vector<int> v;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=n-1;i>=0;i--)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	            v.push_back(a[i]);
	        }
	    }
	    //vector<int>::iterator k;
	    auto k=v.end();
	    k--;
	    while(k!=v.begin())
	        cout<<*k<<" ",k--; 
	    cout<<v[0]<<" \n";
	}
}

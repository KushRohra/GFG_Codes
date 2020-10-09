class Solution
{
	public:
		long long int find_fact(int n)
		{
		    if(n<=1)
		        return 1;
		    long long int f=1;
		    for(int i=2;i<=n;i++)
		        f*=i;
		    return f;
		}
};

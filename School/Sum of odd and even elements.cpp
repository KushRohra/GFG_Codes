class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    int odd=0,even=0;
		    for(int i=1;i<=n;i++) {
		        if(i%2)
		            odd+=i;
		        else even+=i;
		    }
            vector<int> ans={odd,even};
            return ans;
		}
};

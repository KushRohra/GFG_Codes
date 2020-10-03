class Solution{
	public:
	int minNum(long long int arr[],int n) {
	    long long int sum=0;
	    for(int i=0;i<n;i++) {
	        sum+=arr[i];
	    }
	    return sum%2 ? 1 : 2;
	}
};

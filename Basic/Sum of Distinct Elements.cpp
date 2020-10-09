class Solution{
public:	
	int findSum(int arr[], int n) {
	    unordered_set<int> s;
	    for(int i=0;i<n;i++)
	        s.insert(arr[i]);
	    int sum=0;
	    for(auto ele:s)
	        sum+=ele;
	    return sum;
	}
};

class Solution {
	public:
	int sumOfDistinct(int arr[], int n) { 
	    int sum=0;
	    unordered_set<int> s;
	    for(int i=0;i<n;i++)
	        s.insert(arr[i]);
	    for(auto it:s)
	        sum+=(it);
	    return sum;
	} 
};

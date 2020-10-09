class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B) {
	    unordered_set<int> s;
	    for(int i=0;i<n;i++)
	        s.insert(arr[i]);
	    for(int i=A;i<=B;i++)
	        if(s.find(i)==s.end())
	            return 0;
	    return 1;
	}
};

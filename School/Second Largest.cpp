class Solution{
public:
	int print2largest(int arr[], int n) {
	    int first=INT_MIN, second=INT_MIN, i;
	    for(i=0;i<n;i++) {
	        if(arr[i]>first) {
	            second=first;
	            first=arr[i];
	        }
	        else if(arr[i]>second && arr[i]!=first)
	            second=arr[i];
	    }
	    return second==INT_MIN ? -1 : second;
	}
};

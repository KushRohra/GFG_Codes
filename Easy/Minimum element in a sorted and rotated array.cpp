#include <iostream>
using namespace std;
int minElement(int nums[], int n){
    int s=0, e=n-1, mid;
    if(n==1)
        return nums[0];
    while(s<=e) {
        mid=(e-s)/2+s;
        if(mid==0 || mid==n-1) {
            if(mid==0)
                if(nums[mid]<nums[mid+1])
                    return nums[mid];
            else if(mid==n-1)
                if(nums[mid]<nums[mid-1])
                    return nums[mid];   
        }
        else {
            if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1])
                return nums[mid];
        }
        if(nums[mid]>nums[n-1])
            s=mid+1;
        else e=mid-1;
    }
    return nums[mid];
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int i,a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    cout<<minElement(a,n)<<endl;
	}
	return 0;
	
}


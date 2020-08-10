// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int findExtra(int a[], int b[], int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        cout << findExtra(a, b, n) << endl;
    }
}// } Driver Code Ends
/*Complete the function below*/
int findExtra(int a[], int b[], int n)
{
    int i, x=0;
	for(i=0;i<n;i++)
	    x=x^a[i];
	for(i=0;i<n-1;i++)
	    x=x^b[i];
	for(i=0;i<n;i++)
	    if(a[i]==x)
	        return i;
	return 0;
}

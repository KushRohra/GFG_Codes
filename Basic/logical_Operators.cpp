//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void logicOp(int a, int b);

 // } Driver Code Ends
//User function Template for C++


void logicOp(int a, int b)
{
    /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/ 
    int f1 = a&&b;
    int f2 = a||b;
    int f3 = ((!a)&&(!b));
    cout<<f1<<" "<<f2<<" "<<f3<<endl;
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    logicOp(a,b);
	    
	}
	return 0;
}  // } Driver Code Ends

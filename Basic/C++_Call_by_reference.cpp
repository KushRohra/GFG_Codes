//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int rev(int a)
{
    int sum=0;
    while(a!=0)
    {
        sum=sum*10+(a%10);
        a/=10;
    }
    return sum;
}

void reverse_dig(int &a,int &b)
{
    a=rev(a);
    b=rev(b);
}
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}


// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends

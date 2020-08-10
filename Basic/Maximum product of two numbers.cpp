#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,first=INT_MIN,second=INT_MIN;
        cin>>n;
        while(n--)
        {
            cin>>i;
            if(i>=first)
            {
                second=first;
                first=i;
            }
            else if(i>=second)
            {
                second=i;
            }
        }
        cout<<first*second<<endl;
    }
}

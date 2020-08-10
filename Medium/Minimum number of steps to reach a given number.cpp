#include<bits/stdc++.h>
using namespace std;
int steps(int dest)
{
    dest=abs(dest);
    int sum=0, c=0;
    while(sum<dest || (sum-dest)%2!=0)
    {
        c++;
        sum+=c;
    }
    return c;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int dest;
        cin>>dest;
        cout<<steps(dest)<<endl;
    }
}

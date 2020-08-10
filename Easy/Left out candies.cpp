#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,candy;
        cin>>n>>candy;
        int sum=n*(n+1);
        sum/=2;
        candy%=sum;
        int i=1;
        while(i<=candy)
        {
            candy-=i;
            i++;
            //cout<<candy<<" "<<i<<endl;
        }
        cout<<candy<<endl;
    }
}

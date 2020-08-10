#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x;  cin>>n;
        int a[2][n];
        for(i=0;i<2*n;i++)
        {
            cin>>x;
            if(i<n)
                a[0][i]=x;
            else a[1][i-n]=x;
        }
        int incl=max(a[0][0], a[1][0]);
        int excl=0, temp;
        for(int i=1;i<n;i++)
        {
            temp=max(excl, incl);
            incl=excl+max(a[0][i], a[1][i]);
            excl=temp;
        }
        cout<<max(incl, excl)<<endl;
   }
}

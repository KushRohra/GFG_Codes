#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,m,j,k;
        cin>>n>>m;
        int a[n], b[m], c[n+m];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        i=0;
        j=0;
        k=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
                k++;
            }
            else {
                c[k]=b[j];
                j++;
                k++;
            }
        }
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<m)
        {
            c[k]=b[j];
            j++;
            k++;
        }
        for(i=0;i<n+m;i++)
            cout<<c[i]<<" ";
        cout<<endl;
    }
}

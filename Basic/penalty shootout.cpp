#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        string a;
        cin>>a;
        n=a.length();
        for(i=1;i<n;i++)
            if(a[i]=='1' && a[i-1]=='2')
                c++;
        cout<<c<<endl;
    }
}

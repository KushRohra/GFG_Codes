#include <bits/stdc++.h>
using namespace std;
int XORPairs(int a[], int n, int x)
{
    unordered_set<int> s;
    int i, c=0;
    for(i=0;i<n;i++)
    {
        if(s.find(x^a[i])!=s.end())
            c++;
        s.insert(a[i]);
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)    
            cin>>a[i];
        int x;
        cin>>x;
        cout<<XORPairs(a,n,x)<<endl;
    }
}


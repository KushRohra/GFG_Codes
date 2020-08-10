#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,m;
        cin>>n;
        vector<int> v1(n,0);
        for(i=0;i<n;i++)
            cin>>v1[i];
        cin>>m;
        vector<int> v2(m,0);
        for(i=0;i<m;i++)
            cin>>v2[i];
        int min=*min_element(v2.begin(), v2.end());
        int max=*max_element(v1.begin(), v1.end());
        cout<<min*max<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int> v(n,0),b(n,0);
        for(i=0;i<n;i++)
            cin>>v[i];
        stack<int> s;
        s.push(0);   b[0]=1;
        for(i=1;i<n;i++)
        {
            if(s.empty()==true)
            {
                b[i]=1;
                s.push(i);
            }
            else 
            {
                if(v[s.top()]>v[i])
                {
                    b[i]=1;
                    s.push(i);
                }
                else 
                {
                    while(s.empty()==false && v[s.top()]<=v[i])
                        s.pop();
                    if(s.empty()==true)
                        b[i]=i+1;
                    else b[i]=i-s.top();
                    s.push(i);
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}

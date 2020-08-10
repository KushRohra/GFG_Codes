#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x;
        cin>>n;
        vector<string> temp;
        for(i=0;i<n;i++)
        {
            cin>>x;
            temp.push_back(to_string(x));
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                string one=temp[i]+temp[j];
                string two=temp[j]+temp[i];
                if(one.compare(two)<0)
                    swap(temp[i],temp[j]);
            }
        }
        for(i=0;i<n;i++)
            cout<<temp[i];
        cout<<endl;
    }
}

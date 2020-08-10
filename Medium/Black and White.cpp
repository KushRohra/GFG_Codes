#include<bits/stdc++.h>
using namespace std;
bool inBox(int x, int y, int n, int m)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,k,c,ans=0,newX,newY;
        int X[]={1,1,-1,-1,2,2,-2,-2};
        int Y[]={2,-2,2,-2,1,-1,1,-1};
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                c=0;
                for(k=0;k<8;k++)
                {
                    newX=i+X[k];
                    newY=j+Y[k];
                    if(inBox(newX,newY,n,m))
                        c++;
                }
                ans+=n*m-c-1;
            }
        }
        cout<<ans<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int X[]={0,0,1,-1};
int Y[]={1,-1,0,0};
bool isSafe(int i, int j, int n, int m)
{
    if(i>=0 && i<n && j>=0 && j<m)
        return true;
    return false;
}
void dfs(vector<vector<char> > &v, int i, int j, int n, int m)
{
    int x,y,newX,newY;
    v[i][j]='p';
    queue<pair<int,int> > q;
    q.push({i,j});
    while(!q.empty())
    {
        int x=q.front().first, y=q.front().second;
        q.pop();
        for(int k=0;k<4;k++)
        {
            newX=x+X[k];
            newY=y+Y[k];
            if(isSafe(newX,newY,n,m) && v[newX][newY]=='O')
            {
                v[newX][newY]='p';
                q.push({newX, newY});
            }
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m,i,j;
        cin>>n>>m;
        vector<vector<char> > v(n, vector<char> (m));
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>v[i][j];
        for(i=0;i<n;i++)
        {
            if(v[i][0]=='O')
                dfs(v,i,0,n,m);
            if(v[i][m-1]=='O')
                dfs(v,i,m-1,n,m);
        }
        for(j=0;j<m;j++)
        {
            if(v[0][j]=='O')
                dfs(v,0,j,n,m);
            if(v[n-1][j]=='O')
                dfs(v,n-1,j,n,m);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(v[i][j]=='O')
                    v[i][j]='X';
                if(v[i][j]=='p')
                    v[i][j]='O';
            }
        }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cout<<v[i][j]<<" ";
        cout<<endl;
    }
}

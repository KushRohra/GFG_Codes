#include <bits/stdc++.h>
using namespace std;
bool isSafe(int x, int y, int n, int m) {
    if(x>=0 && y>=0 && x<n && y<n)
        return true;
    return false;
}
void bfs(vector<vector<int> > &v, int i, int j, int n, int m, int &c) {
    queue<pair<int, int> > q;
    q.push({i,j});
    int x, y, newX, newY;
    int X[]={0,0,1,-1,1,1,-1,-1};
    int Y[]={1,-1,0,0,1,-1,1,-1};
    while(!q.empty()) {
        x=q.front().first;
        y=q.front().second;
        cout<<x<<" "<<y<<endl;
        q.pop();
        c++;
        for(i=0;i<8;i++){
            newX=x+X[i];
            newY=y+Y[i];
            if(isSafe(newX, newY, n, m) && v[newX][newY]==1) {
                q.push({newX, newY});
                v[newX][newY]=0;
            }
        }
    }
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        vector<vector<int> > v(n,vector<int>(m,0));
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>v[i][j];
        int c=0,ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(v[i][j]==1)
                {
                    bfs(v,i,j,n,m,c);
                    ans=max(ans,c);
                    c=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
bool isSafe(int x, int y, int n, int m)
{
    if(x>=0 && y>=0 && x<n && y<m)
        return true;
    return false;
}
void bfs(vector<vector<char>> &A, int i, int j, int n, int m)
{
    queue<pair<int, int>> q;
    q.push({i,j});
    A[i][j]='O';
    int x,y,newX,newY;
    int X[]={0,0,1,-1};
    int Y[]={1,-1,0,0};
    while(!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(i=0;i<4;i++)
        {
            newX=x+X[i];
            newY=y+Y[i];
            if(isSafe(newX,newY,n,m) && A[newX][newY]=='X')
            {
                q.push({newX,newY});
                A[newX][newY]='O';
            }
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,i,j,c=0;
        cin>>n>>m;
        vector<vector<char>> v(n,vector<char>(m));
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>v[i][j];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(v[i][j]=='X')
                {
                    bfs(v,i,j,n,m);
                    c++;
                }
        cout<<c<<endl;
    }
}

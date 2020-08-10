bool isSafe(int x, int y, int N, int M)
{
    if(x>=0 && x<N && y>=0 && y<M)
        return true;
    return false;
}
vector<int>* dfs(vector<int> A[], int i, int j, int N, int M)
{
    int x, y, newX, newY;
    int X[]={0,0,1,-1,1,1,-1,-1};
    int Y[]={1,-1,0,0,1,-1,1,-1};
    queue<pair<int, int> > q;
    q.push({i,j});
    A[i][j]=0;
    while(!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int k=0;k<8;k++)
        {
            newX=x+X[k];
            newY=y+Y[k];
            if(isSafe(newX,newY,N,M))
            {
                if(A[newX][newY]==1)
				{
                    A[newX][newY]=0;
                    q.push({newX, newY});
                }
            }
        }
    }
    return A;
}
int findIslands(vector<int> A[], int N, int M) {
    int i,j,c=0;
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
            if(A[i][j]==1)
            {
                A=dfs(A,i,j,N,M);
                c++;
            }
    return c;
}

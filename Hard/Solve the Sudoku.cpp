bool usedInRow(int grid[N][N], int row, int num) {
    for(int i=0;i<9;i++)
        if(grid[row][i]==num)
            return true;
    return false;
}

bool usedInCol(int grid[N][N], int col, int num) {
    for(int i=0;i<9;i++)
        if(grid[i][col]==num)
            return true;
    return false;
}

bool usedInBox(int grid[N][N], int startRow, int startCol, int num) {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(grid[i+startRow][j+startCol]==num)
                return true;
    return false;
}

bool isSafe(int grid[N][N], int row, int col, int num) {
    return !usedInRow(grid,row,num) && !usedInCol(grid,col,num) && !usedInBox(grid,row-row%3,col-col%3,num);
}

bool findLocation(int grid[N][N], int &i, int &j) {
    int n=9;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(grid[i][j]==0)
                return true;
    return false;
}
bool SolveSudoku(int grid[N][N]) { 
    int i,j;
    if(!findLocation(grid,i,j))
        return true;
    for(int num=1;num<=9;num++) {
        if(isSafe(grid, i, j, num)) {
           grid[i][j]=num;
            if(SolveSudoku(grid))
                return true;
            grid[i][j]=0; 
        }
    }
    return false;
}

void printGrid (int grid[N][N])  {
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            cout<<grid[i][j]<<" ";
}


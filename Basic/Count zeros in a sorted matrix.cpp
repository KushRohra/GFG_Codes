int countZeros(int A[MAX][MAX],int N)
{
    int c=0;
    for(int i=0;i<N;i++) {
        if(A[i][0]==1)
            return c;
        int s=0,e=N-1,mid,pos=0;
        while(s<=e) {
            mid=(e-s)/2+s;
            if(A[i][mid]==0) {
                pos=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        c+=pos+1;
    } 
    return c;
}


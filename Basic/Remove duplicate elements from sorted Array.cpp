int remove_duplicate(int A[],int N)
{
    int i=0,curr=0;
    for(i=1;i<N;i++)
    {
        if(A[i]!=A[curr])
            A[++curr]=A[i];
    }
    return curr+1;
}

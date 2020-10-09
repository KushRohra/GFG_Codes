int count(int x, int k) {
    int c=0;
    while(x) {
        if(x%10==k)
            c++;
        x/=10;
    }
    return c;
}
int num(int a[], int n, int k)
{
    int c=0;
    for(int i=0;i<n;i++) {
        c+=count(a[i],k);
    }
    return c;
}

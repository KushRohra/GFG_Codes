// x: element to find square root
long long int floorSqrt(long long int x) 
{
    long long int f=0,h,l,mid,j;
    l=0,h=x;
    mid=l+((l-h)/2);
    while(l<=h && f==0)
    {
        mid=l+((h-l)/2);
        if(mid*mid==x)
        {
            j=mid;
            f=1;
        }
        if(mid*mid<x && (mid+1)*(mid+1)>x)
        {
            j=mid;
            f=1;
        }
        if(mid*mid>x && (mid-1)*(mid-1)<x)
        {
            j=mid-1;
            f=1;
        }
        if(mid*mid>x)
        {
            h=mid-1;
        }
        else if(mid*mid<x)
        {
            l=mid+1;
        }
    }
    return j;
}	

void sort012(int nums[], int n)
{
    int i=0, j=n-1;
    while(i<n && nums[i]==0)
        i++;
    while(j>=0 && nums[j]==2)
        j--;
    int curr=i;
    if(j<=0)
        return ;
    if(i>=n)
        return ;
    int c=0;
    //cout<<i<<" "<<j<<endl;
    while(curr<=j)
    {
        if(nums[curr]==2)
        {
            if(nums[j]==0)
                c++;
            else if(nums[j]==2)
            {
                j--;
                continue;
            }
            nums[j]=2;
            j--;
        }
        else if(nums[curr]==0)
        {
            nums[i]=0;
            i++;
        }
        curr++;
    }
    //cout<<j<<endl;
    while(c!=0)
    {
        nums[i]=0;
        i++;
        c--;
    }
    //cout<<i<<" "<<j<<endl;
    for(int p=i;p<=j;p++)
        nums[p]=1;
}

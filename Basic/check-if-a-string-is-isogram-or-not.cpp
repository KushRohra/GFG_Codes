//Complete this function
bool isIsogram(string s)
{
    int l=s.length();
    int i,t,a[26],p;
    p=int('a');
    for(i=0;i<26;i++)
        a[i]=0;
    for(i=0;i<l;i++)
    {
        t=int(s[i])-p;
        if(a[t]==0)
            a[t]++;
        else 
        { 
            //cout<<s[i]<<" "<<i<<" ";
            return 0;
        }    
    }
    return 1;
}

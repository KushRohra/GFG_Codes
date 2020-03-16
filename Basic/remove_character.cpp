{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3="";
        cin>>s1>>s2;
        int j=0,i,p=int('a'),u,l1,l2;
        l1=s1.length();
        l2=s2.length();
        bool b[26]={0};
        for(i=0;i<l2;i++)
            b[int(s2[i])-p]=1;
        for(i=0;i<l1;i++)    
        {
            u=int(s1[i])-p;
            if(b[u]==0)
                s3.push_back(s1[i]);
        }
        cout<<s3<<endl;
    }

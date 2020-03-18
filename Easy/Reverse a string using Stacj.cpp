{
    int i;
    char c;
    for(i=0;i<len/2;i++)
    {
        c=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=c;
    }
}

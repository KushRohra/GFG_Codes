{
    set<int>s;
    int i;
    for(i=0;i<n;i++)
        s.insert(arr[i]);
    return s;
    
}
void setDisplay(set<int>s)
{
    for(auto k=s.begin();k!=s.end();k++)
        cout<<*k<<" ";
    cout<<endl;
}
void setErase(set<int>&s,int x)
{
    if(s.find(x)!=s.end())
        s.erase(x),cout<<"erased "<<x;
    
    else cout<<"not found";
    cout<<endl;

multiset<int> multisetInsert(int arr[],int n) {
    multiset<int>s;
    for(int i=0;i<n;i++)    
        s.insert(arr[i]);
    return s;
}
void multisetDisplay(multiset<int>s) {
    for(auto ele:s) 
        cout<<ele<<" ";
    cout<<endl;
}
void multisetErase(multiset<int>&s,int x) {
    if(s.find(x)!=s.end()) {
        s.erase(x);
        cout<<"erased "<<x;
    }
    else cout<<"not found";
    cout<<endl;
}

void stockBuySell(int price[], int n) {
    int i=0, j=0;
    vector<int> v;
    for(i=0;i<n-1;i++) {
        if(price[i]==price[i+1] && j==i) {
            j=i+1;
            continue;
        }
        if(price[i]<=price[i+1])
            continue;
        else {
            if(i!=j) {
                v.push_back(j);
                v.push_back(i);
            }
            j=i+1;
        }
    }
    if(i!=j) {
        v.push_back(j);
        v.push_back(i);
    }
    for(i=0;i<v.size();i+=2) {
        cout<<"("<<v[i]<<" "<<v[i+1]<<") ";
    }
    if(v.size()==0)
        cout<<"No Profit";
    cout<<endl;
}

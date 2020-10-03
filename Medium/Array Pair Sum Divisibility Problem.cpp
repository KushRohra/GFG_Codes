#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n],sum=0,i;
        for(i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        int k;
        cin>>k;
        if(sum%k!=0 || n%2==1)
            cout<<"False"<<endl;
        else cout<<"True"<<endl;
    }
}

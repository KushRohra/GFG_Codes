#include <bits/stdc++.h>
using namespace std;
int getSetBits(int n) {
    int c=0;
    while(n) {
        n&=(n-1);
        c++;
    }
    return c;
}
bool comp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second<b.second;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,i;
        cin>>n;
        int count,a[n];
        map<int,vector<pair<int, int>>, greater<int>> m;
        for(i=0;i<n;i++) {
            cin>>a[i];
            count=getSetBits(a[i]);
            m[count].push_back({a[i],i});
        }
        for(auto it:m) {
            sort(it.second.begin(), it.second.end(), comp);
            for(auto ele:it.second) {
                cout<<ele.first<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}

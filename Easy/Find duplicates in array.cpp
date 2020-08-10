// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) 
{
    vector<int> v;
    if(n==1)
    {
        v.push_back(-1);
        return v;
    }
    int i;
    unordered_map<int, int> mp;
    for(i=0;i<n;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==2)
            v.push_back(a[i]);
    }
    if(v.size()==0)
        v.push_back(-1);
    sort(v.begin(), v.end());
    return v;
}


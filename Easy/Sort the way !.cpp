#include <bits/stdc++.h>
using namespace std;
bool check(int vaccine[], int patient[], int n) {
    int i;
    for(i=0;i<n;i++)
        if(vaccine[i]<patient[i])
            return 0;
    return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i;
	    cin>>n;
	    int vaccine[n], patient[n];
	    for(i=0;i<n;i++)
	        cin>>vaccine[i];
	    for(i=0;i<n;i++)
	        cin>>patient[i];
	    sort(vaccine, vaccine+n);
	    sort(patient, patient+n);
	    cout<<check(vaccine, patient, n)<<endl;
	}
	return 0;
}

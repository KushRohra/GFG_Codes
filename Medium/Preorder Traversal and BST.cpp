using namespace std;
bool check(int a[], int n) {
    stack<int> s;
    int root=INT_MIN;
    for(int i=0;i<n;i++) {
        if(a[i]<root)
            return false;
        while(!s.empty() && a[i]>s.top()) {
            root=s.top();
            s.pop();
        }
        s.push(a[i]);
    }
    return true;
}
int main() {
	int t;
	cin>>t; 
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n], i;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    cout<<check(a,n)<<endl;
	}
	return 0; 
}

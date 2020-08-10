#include <iostream>
using namespace std;
string check(int n) {
    if(n%400==0)
        return "Yes";
    else if(n%100==0)
        return "No";
    else if(n%4==0)
        return "Yes";
    else return "No";
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    cout<<check(n)<<endl;
	}
	return 0;
}

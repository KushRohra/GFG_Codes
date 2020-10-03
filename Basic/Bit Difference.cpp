#include <iostream>
using namespace std;
int main() {
	int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        int c=0;
        for(int i=0;i<32;i++) {
            if(((n1%2)!=(n2%2)))
                c++;
            n1/=2;
            n2/=2;
        }
        cout<<c<<endl;
    }
	return 0;
}

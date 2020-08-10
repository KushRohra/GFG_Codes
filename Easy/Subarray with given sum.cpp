#include <iostream>
using namespace std;
void find(int a[], int &start, int &end, int n, int sum)
{
    int s=0,i=0,j=0;
    while(j<n){
        if(s<sum){
            s+=a[j];
            j++;
        }
        else if(s>sum){
            s-=a[i];
            i++;
        }
        if(s==sum){
            start=i+1;
            end=j;
            return ;
        }
        //cout<<s<<" "<<i<<" "<<j<<" "<<sum<<endl;
    }
    while(i<n)
    {
        s-=a[i];
        i++;
        if(s==sum){
            start=i+1;
            end=j;
            return ;
        }
    }
    return ;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int sum,n,i;
        cin>>n>>sum;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int start=-1, end=-1;
        find(a,start,end,n,sum);
        if(start==-1)
            cout<<"-1\n";
        else    
            cout<<start<<" "<<end<<"\n";
    }
}

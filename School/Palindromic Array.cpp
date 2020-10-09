#include<bits/stdc++.h>
bool isPallin(int x) {
    int temp=x;
    vector<int> v;
    while(temp) {
        v.push_back(temp%10);
        temp/=10;
    }
    reverse(v.begin(), v.end());
    for(auto ele:v) {
        if(ele!=x%10)
            return 0;
        x/=10;
    }
    return 1;
}
int PalinArray(int a[], int n) {  
    for(int i=0;i<n;i++)
        if(!isPallin(a[i]))
            return 0;
    return 1;
}

#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<(n/2)+1<<endl;
    }
}
/*
Explanation:-
1.(n divide two):- it gives total number of 2s...and this total number is same as number of ways(not total ways) to reach n..
e.g:- for n=4,(n divide two)=(4/2)=2;
so picking one 2 out of total 2s and rest 1s form one way i.e.{2,1,1}..
picking two 2s out of total 2s and rest 1s form one way i.e.{2,2}..
that's all...so number of ways=2.
2. add( one):-now not picking 2s at all so number of way=1.
Hence Total no. of ways :(n divide two) add( one)=2+1=3.i.e.,{1,1,1,1}.{2,1, 1},{2,2}..
*/

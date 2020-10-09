class Solution{
public:
    int isNarcissistic(int N){
        int temp=N,c=0;
        while(temp) {
            temp/=10;
            c++;
        }
        int sum=0,x;
        temp=N;
        while(N) {
            sum+=pow((N%10),c);
            N/=10;
        }
        return sum==temp ? 1 : 0;
    }
};

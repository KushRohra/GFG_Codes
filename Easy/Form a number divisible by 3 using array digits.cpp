class Solution{
public:
    int digitSum(int n) {
        int sum = 0;
        while(n) {
            sum += (n%10);
            n/=10;
        }
        return sum;
    }
    int isPossible(int N, int arr[]){
        int i, sum = 0;
        for(i=0;i<N;i++) {
            sum += digitSum(arr[i]);
        }
        if(sum%3==0)
            return 1;
        else return 0;
    }
};

class Solution {
  public:
    int isDisarium(int N) {
        int temp,c;
        temp=N;
        while(temp) {
            temp/=10;
            c++;
        }
        temp=N;
        int sum=0;
        while(temp) {
            sum+=pow(temp%10,c);
            c--;
            temp/=10;
        }
        return sum==N ? 1 : 0;
    }
};

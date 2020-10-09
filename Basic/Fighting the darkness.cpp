class Solution{   
public:
    int maxDays(int arr[],int n){
        int i,max_day=-1;
        for(i=0;i<n;i++)
            max_day=max(max_day,arr[i]);
        return max_day;
    }
};

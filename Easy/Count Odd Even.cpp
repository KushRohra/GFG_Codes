void countOddEven(int arr[], int sizeof_array) {
    int i,odd=0,even=0;
    for(i=0;i<sizeof_array;i++) {
        if(arr[i]%2)
            odd++;
        else even++;
    }
    cout<<odd<<" "<<even<<endl;
}

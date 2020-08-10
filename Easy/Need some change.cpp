void swapElements(int arr[], int sizeof_array){
    
    int n=sizeof_array;
   for(int i=0;i<n-2;i++)
       swap(arr[i],arr[(i+2)]);
    
}

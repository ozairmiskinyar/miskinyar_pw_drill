void pw_reverse_array(int *arr, int size){
    if(arr == 0 || size <= 0){
        return;
    }
    int i = 0;
    int j = size - 1;
    while (i <j ){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        
    }

}
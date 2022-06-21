#include <stdio.h>

int main(){
    
    char arr[] = { '1','2', '3', '4', '7'};
    printf("Number of elements:%lu \n", sizeof(arr) / sizeof(arr[0]));
    
    printf("arr[%d] = %d \n",4,arr[4]);
    printf("arr[%d] = %d \n",9,arr[9]);
    printf("arr[%d] = %d \n",15,arr[15]);
    
    
    int a [2][3]={1,2,3,4,5,6};
    printf("%d" , a[2][0]);

    return 0;
    
}

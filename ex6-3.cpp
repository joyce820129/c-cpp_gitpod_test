#include <stdio.h>
int main(void)
{
    int input_num; 
    int i;
    
    printf("請輸入數字: ");
    scanf("%d",&input_num);
    
    printf("%d  factorial number are : ", input_num);
    printf("1 ");
    
    for(i=2; i<=input_num ; i++ ){
        
        if( (input_num % i) == 0 ){
            printf (" , %d  ", i);
        }
    }
    
    return 0;
}

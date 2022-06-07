#include <stdio.h>
int multNumbers(int a, int b); 

int main()
{
    int n1,n2,sum;
    printf("請輸入矩形高度: ");
    scanf("%d",&n1);
    printf("請輸入矩形寬度: ");
    scanf("%d",&n2);

    sum = multNumbers(n1, n2);  
    printf("面積 = %d \n",sum);
    
}

int multNumbers(int a, int b)         // function definition   
{
    int result;
    result = a*b;
    return result;                     
    //return statement
}
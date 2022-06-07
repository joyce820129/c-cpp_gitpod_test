#include <stdio.h>
float htotal(int hour, int min); 

int main()
{
    float hour=0;
    float min,mintotal;
    printf("?分鐘 \n");
    printf("分鐘= ");
    scanf("%f",&min);

    hour = htotal(hour,min);  
    printf("約為 %2.2f 小時  \n",hour);
    
}

float htotal(int a,int b)          
{
    float h;
    h = b/60.00;
    return h;                     
}

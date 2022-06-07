#include <stdio.h>
int timetotal(int hour, int min); 

int main()
{
    int hour,min,mintotal;
    printf("?小時 ?分鐘 \n");
    printf("小時= ");
    scanf("%d",&hour);
    printf("分鐘= ");
    scanf("%d",&min);

    mintotal = timetotal(hour, min);  
    printf("總共 %d 分鐘 \n",mintotal);
    
}

int timetotal(int a, int b)          
{
    int result;
    result = (a*60)+b;
    return result;                     
}
#include <stdio.h>
int htotal(int hour, int min); 

int main()
{
    int hour=0;
    int min,mintotal;
    printf("?分鐘 \n");
    printf("分鐘= ");
    scanf("%d",&min);

    hour = htotal(hour,min);  
    mintotal=min-(60*hour);
    printf("總共 %d 小時 %d 分鐘 \n",hour,mintotal);
    
}

int htotal(int a,int b)          
{
    int h;
    h = b/60;
    return h;                     
}

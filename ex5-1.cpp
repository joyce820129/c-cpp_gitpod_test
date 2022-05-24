#include <iostream>
using namespace std;
int main()
{
    int a[6] = {8,3,6,10,45,12};
    int b[6] = {0};
    int i,n;
    
    n = sizeof(a)/sizeof(int);
    for(i=0;i < n;i++){
        printf("a[%d] = %d \n",i,a[i]);
    }
    
    for(i=0;i < n;i++){
        scanf("%d",&b[i]);
    }
    
    for(i=0;i < n;i++){
        printf("b[%d] = %d \n",i,b[i]);
    }
    
    return 0;
}

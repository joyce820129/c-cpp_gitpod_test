#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int x,y;
    int bool_value;
    
    printf("please input x:\n");
    scanf("%d",&x);
    printf("please input y:\n");
    scanf("%d",&y);
    
    bool_value = ( x > y );
    printf(" x > y ==> %d \n",bool_value);
    bool_value = ( x < y );
    printf(" x < y ==> %d \n",bool_value);
    bool_value = ( x < 5 && x < 10 );
    printf(" x < 5 && x < 10 ==> %d \n",bool_value);
    

}
